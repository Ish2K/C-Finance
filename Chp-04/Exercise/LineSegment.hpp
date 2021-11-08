#ifndef LineSegment_HPP
#define LineSegment_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;
class LineSegment
{ // A Line segment consisting of two points
	private:
		Point e1; // End Point of line
		Point e2; // End Point of line
	public:
		// Constructors
		LineSegment(); // Line with both end Points at the origin
		LineSegment(const Point& p1, const Point& p2);
		LineSegment(const LineSegment& l); // Copy constructor
	virtual ~LineSegment(){}; // Destructor
	// Accesssing functions
		Point start() const; // Synonym for e1
		Point end() const; // Synonym for e2
		// Modifiers
		void start(const Point& pt); // Set Point pt1
		void end(const Point& pt); // Set Point pt2
		// Arithmetic
		double length() const; // Length of line
		// Interaction with Points
		Point midPoint() const; // MidPoint of line
		// Print a line, the code is "default" inline
		void print () { e1.print(); e2.print();}
};
#endif