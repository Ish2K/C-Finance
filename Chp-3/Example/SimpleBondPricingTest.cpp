#include "SimpleBondPricing.cpp"
#include <iostream>
using namespace std;
using namespace Chapter3CPPBook;

int main(){
	// Present Value of a series of future values
	Vector futureValues(5); // For five years, calls constructor
	for (long j = 0; j < 4; j++)
	{ // The first 4 years
	futureValues[j] = 100.0; // Vector has indexing []
	}
	futureValues[4] = 1100.0;
	int nPeriods = 5;
	double r = 0.0625;
	cout << "**Present value, series: "<< PresentValue(futureValues, nPeriods, r) << endl;
}