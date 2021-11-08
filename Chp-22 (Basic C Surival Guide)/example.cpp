#include <iostream>
#include <math.h>
using namespace std;
double MidpointRuleValue(double (*f)(double x), double A, double B, int N)
{ // Integrate f on the interval [A, B] using the midpoint rule
	double res = 0.0;
	double h = (B - A)/ double (N);
	for (double x=A+ (0.5 * h); x < B; x += h)
	{
	res += f(x); // N.B. call the function
	}
	return res*h;
}
double myFunc (double x) { return x*x*x; }
double myFunc2 (double x) { return log(x) / (1.0 - x); }

int main()
{
	int N = 200; // Number of subdivisions
	double A = 0.0;
	double B = 1.0;
	double d = MidpointRuleValue(myFunc, A, B, N);
	cout << "Approximate integral Midpoint rule is: " << d << endl;
	double d2 = MidpointRuleValue(myFunc2, A, B, N);
	cout << "Approximate integral is: " << d2
	<< ", Exact: " << - (3.1415)*(3.1415)/6.0 << endl;
	return 0;
}