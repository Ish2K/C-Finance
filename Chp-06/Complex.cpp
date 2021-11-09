#include "Complex.hpp"
#include <math.h>
using namespace std;
Complex :: Complex(){
	Complex(0.0,0.0);
}
Complex :: Complex(double a,double b){
	x = a;
	y = b;
}
Complex :: Complex(const Complex&c){
	x = c.x;
	y = c.y;
}

Complex Complex :: add (const Complex& c2) const{

	Complex result;
	result.x = x+c2.x;
	result.y = y+c2.y;

	return (result);
}
Complex Complex::operator + (const Complex& c2) const
{ // Add two complex numbers
	return Complex(x + c2.x, y + c2.y);
}
Complex Complex::operator - (const Complex& c2) const
{ // Add two complex numbers
	return Complex(x - c2.x, y - c2.y);
}
Complex Complex::operator - () const
{ // Add two complex numbers
	return Complex(-x,-y);
}
Complex Complex::operator * (const Complex& c2) const
{ // Add two complex numbers
	return Complex(x * c2.x, y * c2.y);
}
Complex Complex::operator / (const Complex& c2) const
{ // Add two complex numbers
	return Complex(x / c2.x, y / c2.y);
}

Complex operator + (const Complex& c, double d)
{ // Scaling by a double
	return Complex(c.x + d, c.y + d);
}
Complex operator + (double d,const Complex& c)
{ // Scaling by a double
	return c+d;
}
Complex operator - (const Complex& c, double d)
{ // Scaling by a double
	return Complex(c.x - d, c.y - d);
}

Complex operator - (double d, const Complex& c)
{ // Scaling by a double
// Reuse already made operator
	return Complex(d-c.x, d-c.y);
} 

Complex operator * (const Complex& c, double d)
{ // Scaling by a double
	return Complex(c.x * d, c.y * d);
}

Complex operator * (double d, const Complex& c)
{ // Scaling by a double
// Reuse already made operator
	return c * d;
} 

Complex operator / (const Complex& c,double d)
{ // Scaling by a double
// Reuse already made operator
	return Complex(c.x/d,c.y/d);
} 
Complex operator / (double d, const Complex& c)
{ // Scaling by a double
// Reuse already made operator
	return Complex(d/c.x,d/c.y);
} 
ostream& operator << (ostream& os, const Complex& cmp){

	os << "(" << cmp.x << ", " << cmp.y << ") ";
	return os;
}

Complex exp(const Complex& c)
{ // Exponential function
	double ex = exp(c.x);
	return Complex(ex * cos(c.y), ex * sin(c.y));
}

Complex cosh(const Complex& z)
{ // Hyperbolic cosine function
	return (exp(z) + exp(- (z))) * 0.5;
}
Complex sinh(const Complex& z)
{ // Hyperbolic cosine function
	return (exp(z) - exp(- (z))) * 0.5;
}
Complex cotanh(const Complex& z)
{ // Hyperbolc cotangent
	return cosh(z) / sinh(z);
}