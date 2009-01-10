// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// Rcpp.h: Part of the R/C++ interface class library, Version 5.0
//
// Copyright (C) 2005-2006 Dominick Samperi
// Copyright (C) 2008      Dirk Eddelbuettel
//
// This library is free software; you can redistribute it and/or modify it 
// under the terms of the GNU Lesser General Public License as published by 
// the Free Software Foundation; either version 2.1 of the License, or (at 
// your option) any later version.
//
// This library is distributed in the hope that it will be useful, but 
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public 
// License for more details.
//
// You should have received a copy of the GNU Lesser General Public License 
// along with this library; if not, write to the Free Software Foundation, 
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA 

#ifndef Rcpp_hpp
#define Rcpp_hpp

#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <stdexcept>
#include <vector>

using namespace std;

#include <R.h>
#include <Rinternals.h>

// #ifdef BUILDING_DLL
// #define RcppExport extern "C" __declspec(dllexport)
// #else
#define RcppExport extern "C"
// #endif

char *copyMessageToR(const char* const mesg);

class RcppDate {
private:
    void mdy2jdn(); // month/day/year to Julian day number.
    void jdn2mdy(); // Julian day number to month/day/year.
    int month, day, year;
    int jdn; // Julian day number

public:
    static const int Jan1970Offset;	// offset between Jan 1, 1970 and Julian Day Number
    static const int QLtoJan1970Offset;	// offset between Jan 1, 1970 and QuantLib BaseDate
    RcppDate() { month=1, day=1, year=1970; mdy2jdn(); }
    RcppDate(int Rjdn) { jdn = Rjdn+Jan1970Offset; jdn2mdy(); }
    RcppDate(int month_, int day_, int year_) : month(month_), 
						day(day_),
						year(year_) { 
        if (month < 1 || month > 12 || day < 1 || day > 31)
	    throw std::range_error("RcppDate: invalid date");
        mdy2jdn();
    }
    int getMonth() const { return month; }
    int getDay()  const  { return day; }
    int getYear() const  { return year; }
    int getJDN()  const  { return jdn; }

    // Minimal set of date operations.

    // These operators tend to conflict with QuantLib's
    friend RcppDate operator+(const RcppDate &date, int offset);
    friend int      operator-(const RcppDate& date1, const RcppDate& date2);
    friend bool     operator<(const RcppDate &date1, const RcppDate& date2);
    friend bool     operator>(const RcppDate &date1, const RcppDate& date2);
    friend bool     operator==(const RcppDate &date1, const RcppDate& date2);
    friend bool     operator>=(const RcppDate &date1, const RcppDate& date2);
    friend bool     operator<=(const RcppDate &date1, const RcppDate& date2);

    friend std::ostream& operator<<(std::ostream& os, const RcppDate& date);
// #ifdef USING_QUANTLIB
//     // Conversions from/to a QuantLib Date.
//     RcppDate(Date dateQL);
//     operator Date() const;
// #endif
};

class RcppDatetime {
private:
    double m_d;
    bool m_parsed;
    int m_us;					// microseconds giving us fractional seconds
    struct tm m_tm;
    void parseTime() {
	time_t tt;
	tt = floor(m_d);			// time_t is the number of seconds, so ignore the fractional microseconds
	m_us = round( (m_d - tt) * 1e6);	// fractional (micro)seconds is difference between (fractional) m_d and m_tt
	m_tm = *localtime(&tt);			// parse time type into time structure 
	m_parsed = true;			// and note that we parsed the time type
	//printf("Time is %s %20u %8u\n", ctime(&m_tt), (unsigned int) m_tt, m_us);
    };

protected:
    //friend class RcppResultSet;
    friend class ColDatum;
    //friend class RcppFunction;

public:
    RcppDatetime(void) : m_d(0), m_parsed(false), m_us(0) { };
    RcppDatetime(const double d) : m_d(d), m_parsed(false), m_us(0) { };

    double getFractionalTimestamp(void) const { return m_d; }

    int getYear(void)     { if (!m_parsed) parseTime(); return m_tm.tm_year + 1900; }
    int getMonth(void)    { if (!m_parsed) parseTime(); return m_tm.tm_mon + 1; }
    int getDay(void)      { if (!m_parsed) parseTime(); return m_tm.tm_mday; } 
    int getWeekday(void)  { if (!m_parsed) parseTime(); return m_tm.tm_wday; } 
    int getHour(void)     { if (!m_parsed) parseTime(); return m_tm.tm_hour; } 
    int getMinute(void)   { if (!m_parsed) parseTime(); return m_tm.tm_min; } 
    int getSecond(void)   { if (!m_parsed) parseTime(); return m_tm.tm_sec; } 
    int getMicroSec(void) { if (!m_parsed) parseTime(); return m_us; } 

    friend RcppDatetime operator+(const RcppDatetime &date,   double offset) {
	RcppDatetime tmp(date.m_d);
	tmp.m_d += offset;
	tmp.m_parsed = false;
	return tmp;
    }
    friend double       operator-(const RcppDatetime& dt1,  const RcppDatetime& dt2) { return dt2.m_d -  dt1.m_d; }
    friend bool         operator<(const RcppDatetime &dt1,  const RcppDatetime& dt2) { return dt1.m_d <  dt2.m_d; }
    friend bool         operator<=(const RcppDatetime &dt1, const RcppDatetime& dt2) { return dt1.m_d <= dt2.m_d; }
    friend bool         operator>(const RcppDatetime &dt1,  const RcppDatetime& dt2) { return dt1.m_d >  dt2.m_d; }
    friend bool         operator>=(const RcppDatetime &dt1, const RcppDatetime& dt2) { return dt1.m_d >= dt2.m_d; }
    friend bool         operator==(const RcppDatetime &dt1, const RcppDatetime& dt2) { return dt1.m_d == dt2.m_d; }  // remember float math...

    friend std::ostream& operator<<(std::ostream& os, const RcppDatetime &datetime) {
	RcppDatetime dt(datetime);
	dt.parseTime();
	char buf[32], usec[16];
	strftime(buf, 31, "%Y-%m-%d %H:%M:%S", &dt.m_tm);
	snprintf(usec, 15, ".%.06d", dt.m_us);
	os << buf << usec;
	return os;
    }

};

class RcppParams {
public:
    RcppParams(SEXP params);
    void   checkNames(char *inputNames[], int len);
    double getDoubleValue(string name);
    int    getIntValue(string name);
    string getStringValue(string name);
    bool   getBoolValue(string name);
    RcppDate getDateValue(string name);
    RcppDatetime getDatetimeValue(string name);
private:
    map<string, int> pmap;
    SEXP _params;
};

// Supported data frame column types.
enum ColType { COLTYPE_DOUBLE, COLTYPE_INT, COLTYPE_STRING,
	       COLTYPE_FACTOR, COLTYPE_LOGICAL, 
	       COLTYPE_DATE, COLTYPE_DATETIME };

class ColDatum {
public:
    ColDatum() { 
	level = 0;
    }
    ~ColDatum() {
	if (type == COLTYPE_FACTOR) {
	    // For this to work we need a deep copy when type == COLTYPE_FACTOR.
	    // See the copy constructor below. It is wasteful to have
	    // evey factor cell own a separate copy of levelNames, but we leave
	    // the task of factoring it out (using reference counts) for
	    // later.
	    delete [] levelNames;
	}
    }
    ColDatum(const ColDatum& datum) {

	// Need deep copy so contruction/destruction is synchronized.
	s = datum.s;
	x = datum.x;
	i = datum.i;
	type = datum.type;
	level = datum.level;
	numLevels = datum.numLevels;
	d = datum.d;
	if (type == COLTYPE_FACTOR) {
	    levelNames = new string[numLevels];
	    for (int i = 0; i < numLevels; i++)
		levelNames[i] = datum.levelNames[i];
	}
    }

    ColType getType() const { return type; }

    void setDoubleValue(double val) { x = val; type = COLTYPE_DOUBLE; }
    void setIntValue(int val) { i = val; type = COLTYPE_INT; }
    void setLogicalValue(int val) { 
	if (val != 0 && val != 1)
	    throw std::range_error("ColDatum: logical values must be 0/1.");
	i = val; type = COLTYPE_LOGICAL; 
    }
    void setStringValue(string val) { s = val; type = COLTYPE_STRING; }
    void setDateValue(RcppDate date) {
	d = date;
	type = COLTYPE_DATE;
    }
    void setDatetimeValue(RcppDatetime datetime) {
	x = datetime.m_d;
	type = COLTYPE_DATETIME;
    }
    void setFactorValue(string *names, int numNames, int factorLevel) {
	if (factorLevel < 1 || factorLevel > numNames)
	    throw range_error("setFactorValue: factor level out of range");
	level = factorLevel;
	numLevels = numNames;
	levelNames = new string[numLevels];
	for (int i = 0; i < numLevels; i++)
	    levelNames[i] = names[i];
	type = COLTYPE_FACTOR;
    }

    double getDoubleValue() { 
	if (type != COLTYPE_DOUBLE)
	    throw std::range_error("RcppFrame: wrong data type in getDoubleValue");
	return x; 
    }
    int    getIntValue() { 
	if (type != COLTYPE_INT)
	    throw std::range_error("RcppFrame: wrong data type in getIntValue");
	return i; 
    }
    int    getLogicalValue() { 
	if (type != COLTYPE_LOGICAL)
	    throw std::range_error("RcppFrame: wrong data type in getLogicalValue");
	return i; 
    }
    string getStringValue() { 
	if (type != COLTYPE_STRING)
	    throw std::range_error("RcppFrame: wrong data type in getStringValue");
	return s; 
    }
    RcppDate getDateValue() {
	if (type != COLTYPE_DATE)
	    throw std::range_error("RcppFrame: wrong data type in getDateValue");
	return d; 
    }
    double getDateRCode() { 
	return (double)(d.getJDN() - RcppDate::Jan1970Offset); 
    }
    RcppDatetime getDatetimeValue() {
	if (type != COLTYPE_DATETIME)
	    throw std::range_error("RcppFrame: wrong data type in getDatetimeValue");
	return RcppDatetime(x); 
    }

    void checkFactorType() {
	if (type != COLTYPE_FACTOR)
	    throw std::range_error("RcppFrame: wrong data type in getFactor...");
    }
    int    getFactorNumLevels() { checkFactorType(); return numLevels; }
    int    getFactorLevel() { checkFactorType(); return level; }
    string *getFactorLevelNames() { checkFactorType(); return levelNames; }
    string getFactorLevelName() { checkFactorType(); return levelNames[level-1];}

private:
    ColType type;
    string s;
    double x;			// used for double and datetime
    int i; 			// used for int and logical
    int level; 			// factor level
    int numLevels; 		// number of levels for this factor
    string *levelNames; 	// level name = levelNames[level-1]
    RcppDate d;
};

class RcppFrame {
    vector<string> colNames;
    vector<vector<ColDatum> >  table; // table[row][col]
public:
    RcppFrame(SEXP df); // Construct from R data frame.
    RcppFrame(vector<string> colNames) : colNames(colNames) {
	if (colNames.size() == 0)
	    throw std::range_error("RcppFrame::RcppFrame: zero length colNames");
    }
    vector<string>& getColNames() { return colNames; }
    vector<vector<ColDatum> >& getTableData() { return table; }
    void addRow(vector<ColDatum> rowData) {
	if (rowData.size() != colNames.size())
	    throw std::range_error("RcppFrame::addRow: incorrect row length.");
	if (table.size() > 0) {

	    // First row added determines column types. Check for consistency
	    // for rows after the first...
	    for (int i = 0; i < (int)colNames.size(); i++) {
		if (rowData[i].getType() != table[0][i].getType()) {
		    ostringstream oss;
		    oss << "RcppFrame::addRow: incorrect data type at posn "
			<< i;
		    throw std::range_error(oss.str());
		}
	    }
	}
	table.push_back(rowData);
    }
    int rows() { return table.size(); }
    int cols() { return table[0].size(); }
};

class RcppNumList {
public:
    RcppNumList(SEXP theList) {
	if (!isNewList(theList))
	    throw std::range_error("RcppNumList: non-list passed to constructor");
        len = length(theList);
        names = getAttrib(theList, R_NamesSymbol);
        namedList = theList;
    }
    string getName(int i) {
        if (i < 0 || i >= len) {
	    std::ostringstream oss;
	    oss << "RcppNumList::getName: index out of bounds: " << i;
	    throw std::range_error(oss.str());
	}
        return string(CHAR(STRING_ELT(names,i)));
    }
    double getValue(int i) {
        if (i < 0 || i >= len) {
	    std::ostringstream oss;
	    oss << "RcppNumList::getValue: index out of bounds: " << i;
	    throw std::range_error(oss.str());
	}
	SEXP elt = VECTOR_ELT(namedList, i);
	if (isReal(elt))
	    return REAL(elt)[0];
	else if (isInteger(elt))
	    return (double)INTEGER(elt)[0];
	else
	    throw std::range_error("RcppNumList: contains non-numeric value");
	return 0; // never get here
    }
    int size() { return len; }
private:
    int len;
    SEXP namedList;
    SEXP names;
};

template <typename T>
class RcppVector {
public:
    RcppVector(SEXP vec);
    RcppVector(int len);
    int size() { return len; }
    inline T& operator()(int i) {
	if (i < 0 || i >= len) {
	    std::ostringstream oss;
	    oss << "RcppVector: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return v[i];
    }
    T *cVector();
    vector<T> stlVector();
private:
    int len;
    T *v;
};

class RcppStringVector {
public:
    RcppStringVector(SEXP vec);
    ~RcppStringVector() {
	delete [] v;
    }
    inline string& operator()(int i) {
	if (i < 0 || i >= length) {
	    std::ostringstream oss;
	    oss << "RcppStringVector: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return v[i];
    }
    int size() { return length; }
    inline vector<string> stlVector() {
        vector<string> tmp(length);
        for (int i = 0; i < length; i++)
           tmp[i] = v[i];
        return tmp;
    }
private:
    string *v;
    int length;
};

class RcppDateVector {
public:
    RcppDateVector(SEXP vec);
    ~RcppDateVector() {
	delete [] v;
    }
    inline RcppDate& operator()(int i) {
	if (i < 0 || i >= length) {
	    std::ostringstream oss;
	    oss << "RcppDateVector: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return v[i];
    }
    int size() { return length; }
private:
    RcppDate *v;
    int length;
};

class RcppDatetimeVector {
public:
    RcppDatetimeVector(SEXP vec);
    ~RcppDatetimeVector() {
	delete [] v;
    }
    inline RcppDatetime &operator()(int i) {
	if (i < 0 || i >= length) {
	    std::ostringstream oss;
	    oss << "RcppDatetimeVector: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return v[i];
    }
    int size() { return length; }
private:
    RcppDatetime *v;
    int length;
};

template <typename T>
class RcppMatrix {
public:
    RcppMatrix(SEXP mat);
    RcppMatrix(int nx, int ny);
    int getDim1() { return dim1; }
    int getDim2() { return dim2; }
    inline T& operator()(int i, int j) {
	if (i < 0 || i >= dim1 || j < 0 || j >= dim2) {
	    std::ostringstream oss;
	    oss << "RcppMatrix: subscripts out of range: " << i << ", " << j;
	    throw std::range_error(oss.str());
	}
	return a[i][j];
    }
    T **cMatrix();
    vector<vector<T> > stlMatrix();
private:
    int dim1, dim2;
    T **a;
};




template <typename T>
class RcppVectorView {
public:
    RcppVectorView(SEXP vec);
    inline int size() const { return len; }
    inline T operator()(int i) const {
	if (i < 0 || i >= len) {
	    std::ostringstream oss;
	    oss << "RcppVectorView: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return v[i];
    }
private:
    int len;
    T *v;
};

template <typename T>
class RcppMatrixView {
public:
    RcppMatrixView(SEXP mat);
    inline int dim1() const { return d1; }
    inline int dim2() const { return d2; }
    inline T operator()(int i, int j) const {
	if (i < 0 || i >= d1 || j < 0 || j >= d2) {
	    std::ostringstream oss;
	    oss << "RcppMatrixView: subscripts out of range: " << i << ", " << j;
	    throw std::range_error(oss.str());
	}
	return a[i + d1 * j];
    }
private:
    int d1, d2;
    T *a;
};

class RcppStringVectorView {
public:
    RcppStringVectorView(SEXP vec);
    inline const char *operator()(int i) {
	if (i < 0 || i >= length) {
	    std::ostringstream oss;
	    oss << "RcppStringVector: subscript out of range: " << i;
	    throw std::range_error(oss.str());
	}
	return CHAR(STRING_ELT(v,i));
    }
    int size() { return length; }
private:
    SEXP v;
    int length;
};


class RcppFunction {
public:
    RcppFunction(SEXP fn) : fn(fn) { 
	if (!isFunction(fn))
	    throw std::range_error("RcppFunction: non-function where function expected");
	numProtected = 0;
	currListPosn = 0;
        listSize = 0;
        vectorArg = listArg = R_NilValue;
    };
    ~RcppFunction() {
	UNPROTECT(numProtected);
    }
    SEXP listCall();
    SEXP vectorCall();
    void setRVector(vector<double>& v);
    void setRListSize(int size);
    void appendToRList(string name, double value);
    void appendToRList(string name, int value);
    void appendToRList(string name, string value);
    void appendToRList(string name, RcppDate& date);
    void appendToRList(string name, RcppDatetime& datetime);
    void clearProtectionStack() {
	UNPROTECT(numProtected);
	numProtected = 0;
    }

private:
    SEXP fn, listArg, vectorArg;
    int listSize, currListPosn, numProtected;
    vector<string> names;
};

class RcppResultSet {
public:
    RcppResultSet() { numProtected = 0; }
    void add(string, double);
    void add(string, int);
    void add(string, string);
    void add(string, double *, int);
    void add(string, int *, int);
    void add(string, double **, int, int);
    void add(string, int **, int, int);
    void add(string, RcppDate&);
    void add(string, RcppDateVector&);
    void add(string, RcppDatetime&);
    void add(string, RcppDatetimeVector&);
    void add(string, RcppStringVector&);
    void add(string, vector<double>&);
    void add(string, vector<int>&);
    void add(string, vector<vector<double> >&);
    void add(string, vector<vector<int> >&);
    void add(string, vector<string>&);
    void add(string, RcppVector<int>&);
    void add(string, RcppVector<double>&);
    void add(string, RcppMatrix<int>&);
    void add(string, RcppMatrix<double>&);
    void add(string, RcppFrame&);
    void add(string, SEXP, bool isProtected);
    SEXP getReturnList();
protected:
    int numProtected;
    list<pair<string,SEXP> > values;
};


#endif
