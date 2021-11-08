#include <iostream>
#ifndef Complex_HPP
#define Complex_HPP
using namespace std;
class Complex
{
public:
	double x,y;
public:
	// Constructors
	Complex(); // x=y=0
	Complex(double a, double b);
	Complex(const Complex& c);

	virtual ~Complex(){}; // Destructor
	Complex add (const Complex& c2) const;
	Complex operator + (const Complex& c2) const;
	Complex operator - (const Complex& c2) const;
	Complex operator - () const;
	Complex operator * (const Complex& c2) const;
	Complex operator / (const Complex& c2) const;

	friend Complex operator + (const Complex& c2,double d);
	friend Complex operator + (double d,const Complex& c2);
	friend Complex operator * (const Complex& c, double d);
	friend Complex operator * (double d, const Complex& c);


	friend ostream& operator << (ostream& os, const Complex& cmp);
	friend Complex exp(const Complex& c); // Exponential
	friend Complex cos(const Complex& c); // Cosine function
	friend Complex sin(const Complex& c); // Sine function
	friend Complex cosh(const Complex& c); // Hyperbolic cosine
	friend Complex sinh(const Complex& c); // Hyperbolic sine
};
#endif