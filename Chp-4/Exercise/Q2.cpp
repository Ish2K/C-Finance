#include<iostream>
#include "Point.hpp"
using namespace std;

int& FlunkyFunc()
{
	static int result = 1;
	cout << "Funny";
	return result;
}

int& five(){
	static int result = 5;
	cout<<"Funny2";
	return result;
}
int main(){
	
	// cout<<FlunkyFunc();

	// FlunkyFunc() = five();
	// cout << FlunkyFunc() << "eee";

	Point pt; 
	cout << "wrong" << pt.WrongFunction() << endl;


	return 0;
}