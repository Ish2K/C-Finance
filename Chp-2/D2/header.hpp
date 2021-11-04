// GenericInequalities.hpp
//
// Header file containing declarations of functions
//
// This is the template/generic version.
//
// (C) Datasim Education BV 2006
//
// Preprocessor directives; ensures that we do not
// include a file twice (gives compiler error)
#ifndef header_HPP
#define header_HPP
/////////// Useful functions //////////////////
// Sum of two numbers
template <class Numeric>
Numeric Sum(const Numeric& x, const Numeric& y);

template <class Numeric>
Numeric Sum(const Numeric& x,const Numeric& y,const Numeric& z);

#endif