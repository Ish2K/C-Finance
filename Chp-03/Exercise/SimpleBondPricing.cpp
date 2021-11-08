#include "SimpleBondPricing.hpp"
#include <math.h> 
#include <cassert>
double Chapter3CPPBook:: FutureValue(double P0, long nPeriods, double r){
	
	double factor = 1.0 + r;
	return P0 * power(factor, nPeriods);
}

double Chapter3CPPBook:: power(double d, long n)
{
	if (n == 0) return 1.0;
	if (n == 1) return d;
	double result = d;
	for (long j = 1; j < n; j++)
	{
	result *= d;
	}
	return result;
}

double Chapter3CPPBook:: PresentValue(const Vector& prices,long nPeriods, double r)
{
// Number of periods MUST == size of the vector
	assert (nPeriods == (long)prices.size());
	double factor = 1.0 + r;
	double PV = 0.0;
	for (long t = 0; t < nPeriods; t++)
	{
	PV += prices[t] / power(factor, t+1);
	}
	return PV;
}

double Chapter3CPPBook:: MPeriodstoContinuous(double mPeriods,double rm){

	return (mPeriods * log(1 + (rm/mPeriods)));
}

double Chapter3CPPBook :: ContinuousToMPeriods(double mPeriods,double rc){

	return (mPeriods * (exp(rc/mPeriods) - 1));
}