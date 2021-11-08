#include<iostream>
using namespace std;
#include "../D2/header.cpp"
//#include "C:/Users/ishaa/Desktop/trading/C++ finance/Chp-2/D2/header.cpp"

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	cout<<"A+B = " <<Sum<double>(a,b)<<"\n";
	cout<<"A+B+C = " <<Sum<double>(a,b,c)<<"\n";
	return 0;
}