#include "SimpleBondPricing.cpp"
#include <iostream>
using namespace std;
using namespace Chapter3CPPBook;

int main(){
	int nPeriods = 100;
	double r = 0.0625;

	cout << "**M periods to Continuous if Rate = "<<r<<" = "<< MPeriodstoContinuous(nPeriods, r) << endl;
	cout << "**Continuous to Mperiods if Rate = "<<r<<" = "<< ContinuousToMPeriods(nPeriods, r) << endl;
}