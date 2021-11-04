// GenericInequalities.cpp
//
// Code file containing bodies of functions
//
// (C) Datasim Education BV 2006
//
#ifndef header_CPP
#define header_CPP
#include "header.hpp"
/////////// Useful functions //////////////////
// Sum of two numbers
template <class Numeric>
Numeric Sum(const Numeric& x, const Numeric& y)
{
	return x+y;
}
// Sum of three numbers
template <class Numeric>
Numeric Sum(const Numeric& x, const Numeric& y, const Numeric& z)
{
    return Sum<Numeric>(Sum<Numeric>(x,y), z);
}

#endif