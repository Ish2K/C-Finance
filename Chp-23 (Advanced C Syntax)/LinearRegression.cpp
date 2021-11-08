#include <iostream>
#include <math.h>
using namespace std;

struct Point
{
	double x;
	double y;
};
struct Line
{ // a + bx
	double a;
	double b;
	void print() const { cout << "a + bx: a = " << a << ", b = " << b << endl;}
	double value(double xval) const { return a + b*xval; }
};

double sum(double* x, int n)
{ // Sum of elements
	double ans = x[0];
	for (int j = 1; j < n; j++)
	{
		ans += x[j];
	}
	return ans;
}

double sumSquares(double* x, int n)
{ // Sum of squares
	double ans = x[0] * x[0];
	for (int j = 1; j < n; j++)
	{
		ans += (x[j] * x[j]);
	}
	return ans;
}

double innerProduct(double* x, double* y, int n)
{ // Inner product
	double ans = x[0] * y[0];
	for (int j = 1; j < n; j++)
	{
	ans += (x[j] * y[j]);
	}
	return ans;
}

Line LinearRegressionLine (double* xarr, double* yarr, int N)
{ // Find the regression line for a set of input data
// Now the parameters for the linear regression line
	double sumx = sum(xarr, N);
	double sumy = sum(yarr, N);
	double sumSx = sumSquares(xarr, N);
	//double sumSy = sumSquares(yarr, N);
	double ip = innerProduct(xarr, yarr, N);
	double denominator = double(N)*sumSx - (sumx*sumx);
	double A = (sumy*sumSx - (sumx*ip))/denominator;
	double B = (double(N)*ip - (sumx*sumy))/denominator;
	Line lin;
	lin.a = A;
	lin.b = B;
	return lin;
}

//Standard Error Calculation (Q1)
double standardError(Line BestFitLine,double* xarr, double* yarr, int N){

	double sumy = sum(yarr, N);
	double sumSy = sumSquares(yarr, N);
	double ip = innerProduct(xarr, yarr, N);
	return (sumSy - (BestFitLine.a*sumy) - (BestFitLine.b*ip))/N;
}

int main(){
	double Xarr[] = {65, 63, 67, 64, 68, 62, 70, 66, 68, 67, 69, 71};
	double Yarr[] = {68, 66, 68, 65, 69, 66, 68, 65, 71, 67, 68, 70};
	int n = 12;
	//double xval;
	Line linYonX = LinearRegressionLine (Xarr, Yarr, n);
	linYonX.print();
	
	cout<<"Standard Error = "<<standardError(linYonX,Xarr,Yarr,n)<<endl;
	cout<<endl;
	//Linear regression of X on Y
	Line linXonY = LinearRegressionLine (Yarr, Xarr, n);

	cout<<"Regression of X on Y:\n";
	linXonY.print();

}