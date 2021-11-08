#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.141592653
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

double MidpointRuleValuePart3(double (*f)(double x,double a,double b), double A, double B, int N,double a,double b)
{ // Integrate f on the interval [A, B] using the midpoint rule
	double res = 0.0;
	double h = (B - A)/ double (N);
	for (double x=A+ (0.5 * h); x < B; x += h)
	{
		res += f(x,a,b); // N.B. call the function
	}
	return res*h;
}

double F1 (double x) { return log(x)/(1-(x*x)); }
double F2(double x) { return (1/x)*(log((1+x)/(1-x))); }
double F3(double x,double a,double b) { return (1/(a+(b*cos(x))));}

int main()
{
	int N = 2000; // Number of subdivisions
	double A = 0.0;
	double B = 1.0;

	//Part-1
	double d = MidpointRuleValue(F1, A, B, N);
	cout << "Approximate integral Midpoint rule is: " << d << endl;
	cout<< "Exact Value = "<< (-PI*PI)/8 << endl;


	//Part-2
	double d2 = MidpointRuleValue(F2, A, B, N);
	cout << "Approximate integral is: " << d2 << endl;
	cout<< "Exact Value = "<< (PI*PI)/4 << endl;

	//Part-3
	cout<<"PART - 3 Approximations - \n";
	for(double b=0.5;b<=5;b+=0.1){
		for(double a=(b)+0.5;a<=5;a+=0.1){ // a>b>0 is always satisfied
			B = PI;
			double d3 = MidpointRuleValuePart3(F3, A, B, N,a,b);
			cout << "Approximate integral is: " << d3 << endl;
			cout<< "Exact Value = "<< (PI)/(pow((a*a) - (b*b),0.5)) << endl;
		}
	}
	return 0;
}