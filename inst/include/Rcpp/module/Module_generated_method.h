// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// Module_generated_method.h: Rcpp R/C++ interface class library -- Rcpp modules
//
// Copyright (C) 2010	Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp_Module_generated_method_h
#define Rcpp_Module_generated_method_h

	template <typename OUT>
	self& method( const char* name_, OUT (Class::*fun)(void) ){
		AddMethod( name_, new CppMethod0<Class,OUT>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT>
	self& method( const char* name_, OUT (Class::*fun)(void) const ){
		AddMethod( name_, new const_CppMethod0<Class,OUT>( fun ) ) ;
  		return *this ;
	}

	
	template <typename OUT>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(void) ){
		AddMethod( name_, new CppMethod0<Class,OUT>( fun ) ) ;
  		return *this ;
	}
	template <typename OUT>
	self& const_method( const char* name_, OUT (Class::*fun)(void) const ){
		AddMethod( name_, new const_CppMethod0<Class,OUT>( fun ) ) ;
  		return *this ;
	}
	
	


	template <typename OUT, typename U0>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0) ){
		AddMethod( name_, new CppMethod1<Class,OUT,U0>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0) const ){
		AddMethod( name_, new const_CppMethod1<Class,OUT,U0>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0) ){
		AddMethod( name_, new CppMethod1<Class,OUT,U0>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0) const ){
		AddMethod( name_, new const_CppMethod1<Class,OUT,U0>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1) ){
		AddMethod( name_, new CppMethod2<Class,OUT,U0, U1>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1) const ){
		AddMethod( name_, new const_CppMethod2<Class,OUT,U0, U1>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1) ){
		AddMethod( name_, new CppMethod2<Class,OUT,U0, U1>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1) const ){
		AddMethod( name_, new const_CppMethod2<Class,OUT,U0, U1>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2) ){
		AddMethod( name_, new CppMethod3<Class,OUT,U0, U1, U2>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2) const ){
		AddMethod( name_, new const_CppMethod3<Class,OUT,U0, U1, U2>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2) ){
		AddMethod( name_, new CppMethod3<Class,OUT,U0, U1, U2>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2) const ){
		AddMethod( name_, new const_CppMethod3<Class,OUT,U0, U1, U2>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3) ){
		AddMethod( name_, new CppMethod4<Class,OUT,U0, U1, U2, U3>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3) const ){
		AddMethod( name_, new const_CppMethod4<Class,OUT,U0, U1, U2, U3>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3) ){
		AddMethod( name_, new CppMethod4<Class,OUT,U0, U1, U2, U3>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3) const ){
		AddMethod( name_, new const_CppMethod4<Class,OUT,U0, U1, U2, U3>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) ){
		AddMethod( name_, new CppMethod5<Class,OUT,U0, U1, U2, U3, U4>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) const ){
		AddMethod( name_, new const_CppMethod5<Class,OUT,U0, U1, U2, U3, U4>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) ){
		AddMethod( name_, new CppMethod5<Class,OUT,U0, U1, U2, U3, U4>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) const ){
		AddMethod( name_, new const_CppMethod5<Class,OUT,U0, U1, U2, U3, U4>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) ){
		AddMethod( name_, new CppMethod6<Class,OUT,U0, U1, U2, U3, U4, U5>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) const ){
		AddMethod( name_, new const_CppMethod6<Class,OUT,U0, U1, U2, U3, U4, U5>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) ){
		AddMethod( name_, new CppMethod6<Class,OUT,U0, U1, U2, U3, U4, U5>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) const ){
		AddMethod( name_, new const_CppMethod6<Class,OUT,U0, U1, U2, U3, U4, U5>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) ){
		AddMethod( name_, new CppMethod7<Class,OUT,U0, U1, U2, U3, U4, U5, U6>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) const ){
		AddMethod( name_, new const_CppMethod7<Class,OUT,U0, U1, U2, U3, U4, U5, U6>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) ){
		AddMethod( name_, new CppMethod7<Class,OUT,U0, U1, U2, U3, U4, U5, U6>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) const ){
		AddMethod( name_, new const_CppMethod7<Class,OUT,U0, U1, U2, U3, U4, U5, U6>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) ){
		AddMethod( name_, new CppMethod8<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) const ){
		AddMethod( name_, new const_CppMethod8<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) ){
		AddMethod( name_, new CppMethod8<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) const ){
		AddMethod( name_, new const_CppMethod8<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) ){
		AddMethod( name_, new CppMethod9<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) const ){
		AddMethod( name_, new const_CppMethod9<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) ){
		AddMethod( name_, new CppMethod9<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) const ){
		AddMethod( name_, new const_CppMethod9<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) ){
		AddMethod( name_, new CppMethod10<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) const ){
		AddMethod( name_, new const_CppMethod10<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) ){
		AddMethod( name_, new CppMethod10<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) const ){
		AddMethod( name_, new const_CppMethod10<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) ){
		AddMethod( name_, new CppMethod11<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) const ){
		AddMethod( name_, new const_CppMethod11<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) ){
		AddMethod( name_, new CppMethod11<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) const ){
		AddMethod( name_, new const_CppMethod11<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) ){
		AddMethod( name_, new CppMethod12<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) const ){
		AddMethod( name_, new const_CppMethod12<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) ){
		AddMethod( name_, new CppMethod12<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) const ){
		AddMethod( name_, new const_CppMethod12<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) ){
		AddMethod( name_, new CppMethod13<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) const ){
		AddMethod( name_, new const_CppMethod13<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) ){
		AddMethod( name_, new CppMethod13<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) const ){
		AddMethod( name_, new const_CppMethod13<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) ){
		AddMethod( name_, new CppMethod14<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) const ){
		AddMethod( name_, new const_CppMethod14<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) ){
		AddMethod( name_, new CppMethod14<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) const ){
		AddMethod( name_, new const_CppMethod14<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) ){
		AddMethod( name_, new CppMethod15<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) const ){
		AddMethod( name_, new const_CppMethod15<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) ){
		AddMethod( name_, new CppMethod15<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) const ){
		AddMethod( name_, new const_CppMethod15<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) ){
		AddMethod( name_, new CppMethod16<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) const ){
		AddMethod( name_, new const_CppMethod16<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) ){
		AddMethod( name_, new CppMethod16<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) const ){
		AddMethod( name_, new const_CppMethod16<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) ){
		AddMethod( name_, new CppMethod17<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) const ){
		AddMethod( name_, new const_CppMethod17<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) ){
		AddMethod( name_, new CppMethod17<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) const ){
		AddMethod( name_, new const_CppMethod17<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) ){
		AddMethod( name_, new CppMethod18<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) const ){
		AddMethod( name_, new const_CppMethod18<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) ){
		AddMethod( name_, new CppMethod18<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) const ){
		AddMethod( name_, new const_CppMethod18<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) ){
		AddMethod( name_, new CppMethod19<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) const ){
		AddMethod( name_, new const_CppMethod19<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) ){
		AddMethod( name_, new CppMethod19<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) const ){
		AddMethod( name_, new const_CppMethod19<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) ){
		AddMethod( name_, new CppMethod20<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) const ){
		AddMethod( name_, new const_CppMethod20<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) ){
		AddMethod( name_, new CppMethod20<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) const ){
		AddMethod( name_, new const_CppMethod20<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) ){
		AddMethod( name_, new CppMethod21<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) const ){
		AddMethod( name_, new const_CppMethod21<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) ){
		AddMethod( name_, new CppMethod21<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) const ){
		AddMethod( name_, new const_CppMethod21<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) ){
		AddMethod( name_, new CppMethod22<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) const ){
		AddMethod( name_, new const_CppMethod22<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) ){
		AddMethod( name_, new CppMethod22<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) const ){
		AddMethod( name_, new const_CppMethod22<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) ){
		AddMethod( name_, new CppMethod23<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) const ){
		AddMethod( name_, new const_CppMethod23<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) ){
		AddMethod( name_, new CppMethod23<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) const ){
		AddMethod( name_, new const_CppMethod23<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) ){
		AddMethod( name_, new CppMethod24<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) const ){
		AddMethod( name_, new const_CppMethod24<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) ){
		AddMethod( name_, new CppMethod24<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) const ){
		AddMethod( name_, new const_CppMethod24<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) ){
		AddMethod( name_, new CppMethod25<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) const ){
		AddMethod( name_, new const_CppMethod25<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) ){
		AddMethod( name_, new CppMethod25<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) const ){
		AddMethod( name_, new const_CppMethod25<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) ){
		AddMethod( name_, new CppMethod26<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) const ){
		AddMethod( name_, new const_CppMethod26<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) ){
		AddMethod( name_, new CppMethod26<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) const ){
		AddMethod( name_, new const_CppMethod26<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) ){
		AddMethod( name_, new CppMethod27<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) const ){
		AddMethod( name_, new const_CppMethod27<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) ){
		AddMethod( name_, new CppMethod27<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) const ){
		AddMethod( name_, new const_CppMethod27<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) ){
		AddMethod( name_, new CppMethod28<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) const ){
		AddMethod( name_, new const_CppMethod28<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) ){
		AddMethod( name_, new CppMethod28<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) const ){
		AddMethod( name_, new const_CppMethod28<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) ){
		AddMethod( name_, new CppMethod29<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) const ){
		AddMethod( name_, new const_CppMethod29<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) ){
		AddMethod( name_, new CppMethod29<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) const ){
		AddMethod( name_, new const_CppMethod29<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) ){
		AddMethod( name_, new CppMethod30<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) const ){
		AddMethod( name_, new const_CppMethod30<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) ){
		AddMethod( name_, new CppMethod30<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) const ){
		AddMethod( name_, new const_CppMethod30<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) ){
		AddMethod( name_, new CppMethod31<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) const ){
		AddMethod( name_, new const_CppMethod31<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) ){
		AddMethod( name_, new CppMethod31<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) const ){
		AddMethod( name_, new const_CppMethod31<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) ){
		AddMethod( name_, new CppMethod32<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) const ){
		AddMethod( name_, new const_CppMethod32<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) ){
		AddMethod( name_, new CppMethod32<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) const ){
		AddMethod( name_, new const_CppMethod32<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) ){
		AddMethod( name_, new CppMethod33<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) const ){
		AddMethod( name_, new const_CppMethod33<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) ){
		AddMethod( name_, new CppMethod33<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) const ){
		AddMethod( name_, new const_CppMethod33<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) ){
		AddMethod( name_, new CppMethod34<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) const ){
		AddMethod( name_, new const_CppMethod34<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) ){
		AddMethod( name_, new CppMethod34<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) const ){
		AddMethod( name_, new const_CppMethod34<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) ){
		AddMethod( name_, new CppMethod35<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) const ){
		AddMethod( name_, new const_CppMethod35<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) ){
		AddMethod( name_, new CppMethod35<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) const ){
		AddMethod( name_, new const_CppMethod35<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) ){
		AddMethod( name_, new CppMethod36<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) const ){
		AddMethod( name_, new const_CppMethod36<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) ){
		AddMethod( name_, new CppMethod36<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) const ){
		AddMethod( name_, new const_CppMethod36<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) ){
		AddMethod( name_, new CppMethod37<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) const ){
		AddMethod( name_, new const_CppMethod37<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) ){
		AddMethod( name_, new CppMethod37<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) const ){
		AddMethod( name_, new const_CppMethod37<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) ){
		AddMethod( name_, new CppMethod38<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) const ){
		AddMethod( name_, new const_CppMethod38<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) ){
		AddMethod( name_, new CppMethod38<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) const ){
		AddMethod( name_, new const_CppMethod38<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) ){
		AddMethod( name_, new CppMethod39<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) const ){
		AddMethod( name_, new const_CppMethod39<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) ){
		AddMethod( name_, new CppMethod39<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) const ){
		AddMethod( name_, new const_CppMethod39<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) ){
		AddMethod( name_, new CppMethod40<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) const ){
		AddMethod( name_, new const_CppMethod40<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) ){
		AddMethod( name_, new CppMethod40<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) const ){
		AddMethod( name_, new const_CppMethod40<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) ){
		AddMethod( name_, new CppMethod41<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) const ){
		AddMethod( name_, new const_CppMethod41<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) ){
		AddMethod( name_, new CppMethod41<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) const ){
		AddMethod( name_, new const_CppMethod41<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) ){
		AddMethod( name_, new CppMethod42<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) const ){
		AddMethod( name_, new const_CppMethod42<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) ){
		AddMethod( name_, new CppMethod42<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) const ){
		AddMethod( name_, new const_CppMethod42<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) ){
		AddMethod( name_, new CppMethod43<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) const ){
		AddMethod( name_, new const_CppMethod43<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) ){
		AddMethod( name_, new CppMethod43<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) const ){
		AddMethod( name_, new const_CppMethod43<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) ){
		AddMethod( name_, new CppMethod44<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) const ){
		AddMethod( name_, new const_CppMethod44<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) ){
		AddMethod( name_, new CppMethod44<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) const ){
		AddMethod( name_, new const_CppMethod44<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) ){
		AddMethod( name_, new CppMethod45<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) const ){
		AddMethod( name_, new const_CppMethod45<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) ){
		AddMethod( name_, new CppMethod45<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) const ){
		AddMethod( name_, new const_CppMethod45<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) ){
		AddMethod( name_, new CppMethod46<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) const ){
		AddMethod( name_, new const_CppMethod46<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) ){
		AddMethod( name_, new CppMethod46<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) const ){
		AddMethod( name_, new const_CppMethod46<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) ){
		AddMethod( name_, new CppMethod47<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) const ){
		AddMethod( name_, new const_CppMethod47<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) ){
		AddMethod( name_, new CppMethod47<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) const ){
		AddMethod( name_, new const_CppMethod47<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) ){
		AddMethod( name_, new CppMethod48<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) const ){
		AddMethod( name_, new const_CppMethod48<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) ){
		AddMethod( name_, new CppMethod48<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) const ){
		AddMethod( name_, new const_CppMethod48<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) ){
		AddMethod( name_, new CppMethod49<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) const ){
		AddMethod( name_, new const_CppMethod49<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) ){
		AddMethod( name_, new CppMethod49<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) const ){
		AddMethod( name_, new const_CppMethod49<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) ){
		AddMethod( name_, new CppMethod50<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) const ){
		AddMethod( name_, new const_CppMethod50<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) ){
		AddMethod( name_, new CppMethod50<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) const ){
		AddMethod( name_, new const_CppMethod50<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) ){
		AddMethod( name_, new CppMethod51<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) const ){
		AddMethod( name_, new const_CppMethod51<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) ){
		AddMethod( name_, new CppMethod51<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) const ){
		AddMethod( name_, new const_CppMethod51<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) ){
		AddMethod( name_, new CppMethod52<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) const ){
		AddMethod( name_, new const_CppMethod52<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) ){
		AddMethod( name_, new CppMethod52<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) const ){
		AddMethod( name_, new const_CppMethod52<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) ){
		AddMethod( name_, new CppMethod53<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) const ){
		AddMethod( name_, new const_CppMethod53<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) ){
		AddMethod( name_, new CppMethod53<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) const ){
		AddMethod( name_, new const_CppMethod53<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) ){
		AddMethod( name_, new CppMethod54<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) const ){
		AddMethod( name_, new const_CppMethod54<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) ){
		AddMethod( name_, new CppMethod54<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) const ){
		AddMethod( name_, new const_CppMethod54<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) ){
		AddMethod( name_, new CppMethod55<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) const ){
		AddMethod( name_, new const_CppMethod55<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) ){
		AddMethod( name_, new CppMethod55<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) const ){
		AddMethod( name_, new const_CppMethod55<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) ){
		AddMethod( name_, new CppMethod56<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) const ){
		AddMethod( name_, new const_CppMethod56<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) ){
		AddMethod( name_, new CppMethod56<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) const ){
		AddMethod( name_, new const_CppMethod56<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) ){
		AddMethod( name_, new CppMethod57<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) const ){
		AddMethod( name_, new const_CppMethod57<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) ){
		AddMethod( name_, new CppMethod57<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) const ){
		AddMethod( name_, new const_CppMethod57<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) ){
		AddMethod( name_, new CppMethod58<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) const ){
		AddMethod( name_, new const_CppMethod58<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) ){
		AddMethod( name_, new CppMethod58<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) const ){
		AddMethod( name_, new const_CppMethod58<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) ){
		AddMethod( name_, new CppMethod59<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) const ){
		AddMethod( name_, new const_CppMethod59<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) ){
		AddMethod( name_, new CppMethod59<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) const ){
		AddMethod( name_, new const_CppMethod59<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) ){
		AddMethod( name_, new CppMethod60<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) const ){
		AddMethod( name_, new const_CppMethod60<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) ){
		AddMethod( name_, new CppMethod60<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) const ){
		AddMethod( name_, new const_CppMethod60<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) ){
		AddMethod( name_, new CppMethod61<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) const ){
		AddMethod( name_, new const_CppMethod61<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) ){
		AddMethod( name_, new CppMethod61<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) const ){
		AddMethod( name_, new const_CppMethod61<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) ){
		AddMethod( name_, new CppMethod62<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) const ){
		AddMethod( name_, new const_CppMethod62<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) ){
		AddMethod( name_, new CppMethod62<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) const ){
		AddMethod( name_, new const_CppMethod62<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) ){
		AddMethod( name_, new CppMethod63<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) const ){
		AddMethod( name_, new const_CppMethod63<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) ){
		AddMethod( name_, new CppMethod63<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) const ){
		AddMethod( name_, new const_CppMethod63<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) ){
		AddMethod( name_, new CppMethod64<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) const ){
		AddMethod( name_, new const_CppMethod64<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) ){
		AddMethod( name_, new CppMethod64<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) const ){
		AddMethod( name_, new const_CppMethod64<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63>( fun ) ) ;
  		return *this ;
	}




	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) ){
		AddMethod( name_, new CppMethod65<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64>
	self& method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) const ){
		AddMethod( name_, new const_CppMethod65<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64>( fun ) ) ;
  		return *this ;
	}

	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64>
	self& nonconst_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) ){
		AddMethod( name_, new CppMethod65<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64>( fun ) ) ;
  		return *this ;
	}
	
	template <typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64>
	self& const_method( const char* name_, OUT (Class::*fun)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) const ){
		AddMethod( name_, new const_CppMethod65<Class,OUT,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64>( fun ) ) ;
  		return *this ;
	}



#endif
