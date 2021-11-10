#include "Stack.cpp"
#include <iostream>
using namespace std;

int main(){
	
	Stack s1 = Stack();
	s1.Push(5.6);
	s1.Push(8.6);
	s1.Push(10.3);

	cout<<s1 << endl;

	s1.Pop();
	cout<<s1 <<endl;
	
	return 0;
}