#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.141592653

double TwoDMidpointRuleValue(double (*f)(double x, double y),
	double A, double B,double C, double D, int N, int M){


	double res = 0.0;
	double h1 = (B - A)/ double (N);
	double h2 = (D - C)/ double (M);
	for (double x=A+ (0.5 * h1); x < B; x += h1)
	{	
		// cout<<x<<endl;
		for (double y=C+ (0.5 * h2); y < D; y += h2){
			res += (f(x,y)); 
		}
		// cout<<res<<endl;
	}
	return h1*h2*res;
}
//Reference Problem - https://tutorial.math.lamar.edu/Solutions/CalcIII/DoubleIntegrals/Prob1.aspx

double F1 (double x,double y) { 

	return (x*x) + y; 
}
int main(){
	//Unit triangle 
	int N = 1000;
	int M = 1000;
	double A = -1.0,B=3.0,C=0.0,D = 4.0;

	// cout<<F1(1.05,1.0)
	cout<<TwoDMidpointRuleValue(F1,A,B,C,D,N,M);
}