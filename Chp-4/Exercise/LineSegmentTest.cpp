#include <iostream>
#include "LineSegment.cpp"
using namespace std;

int main(){
	const Point p1(1.0,2.0),p2(5.0,9.4);
	const Point p3(7.6,9.54),p4(8.8,7.32);

	LineSegment l1(p1,p2);
	LineSegment l2(p3,p4);

	cout<<"Endpoints of Line Segment 1 : "<<endl;
	l1.print();

	cout<<"Endpoints of Line Segment 2 : "<<endl;
	l2.print();

	cout<<"Length of l1 : "<<l1.length()<<endl;
	cout<<"Length of l2 : "<<l2.length()<<endl;

	cout<<"MidPoint of l1 : "<<endl;
	l1.midPoint().print();

	cout<<"MidPoint of l2 : "<<endl;
	l2.midPoint().print();

}