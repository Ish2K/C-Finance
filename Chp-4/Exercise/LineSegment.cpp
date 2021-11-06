#include <math.h>
#include "LineSegment.hpp"
LineSegment :: LineSegment(){
	LineSegment(Point(),Point());
}

LineSegment :: LineSegment(const Point& p1, const Point& p2){
	e1 = p1;
	e2 = p2;
}

LineSegment :: LineSegment(const LineSegment& l){
	e1 = l.e1;
	e2 = l.e2;
}

Point LineSegment :: start() const{
	return e1;
}

Point LineSegment :: end() const{
	return e2;
}

void LineSegment :: start(const Point& pt){
	e1 = pt;
}
void LineSegment :: end(const Point& pt){
	e2 = pt;
}

double LineSegment :: length() const{
	return pow(((e1.x-e2.x)*(e1.x-e2.x) + (e1.y-e2.y)*(e1.y-e2.y)),0.5);
}
Point LineSegment :: midPoint() const{
	Point e3;
	e3.x = (e1.x+e2.x)/2;
	e3.y = (e1.y+e2.y)/2;
	return e3;
}