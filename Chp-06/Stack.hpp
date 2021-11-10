#ifndef Stack_HPP
#define Stack_HPP
#include <iostream>
using namespace std;
class Stack
{
	private:
	// EXX What is the member data in this case?
		double* arr;
		int size;
		Stack(const Stack& source); // Copy constructor
		// Operators
		Stack& operator = (const Stack& source);
		int idx;
		
	public:
	// Constructors & destructor
		Stack(); // Default constructor
		Stack(int NewSize); // Initial size of the stack
		virtual ~Stack(); // Destructor

		void Push(double NewItem); // Push element onto stack
		double Pop(); // Pop last pushed element
		double *getStack() const;
		int getSize() const;
		friend ostream& operator << (ostream& os, const Stack& stk);
};
#endif // STACK HPP