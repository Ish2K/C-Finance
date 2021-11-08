#include <iostream>
#include "Complex.cpp"
using namespace std;

int main(){
	Complex z1(2.8,9.6),z2(7.3,9.4);
	cout<<z1<<" + "<<z2<<" = "; 
	cout<<z1+z2;
	cout<<"\n";

	Complex za = exp(Complex(0.0, 0.0));
	cout << za <<'\n';
	Complex zs = sinh(za);
	Complex zc = cosh(za);
	cout << zs << zc<<'\n';
	Complex c2(0.0, 0.0);
	cout << sinh(c2) << cosh(c2)<<'\n';
	return 0;
}