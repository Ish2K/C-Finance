#include "Stack.hpp"
#include <iostream>
using namespace std;
Stack :: Stack(){
	size = 10;
	arr = new double[size];
	idx = 0;
}
Stack :: Stack(int NewSize){
	size = NewSize;
	arr = new double[size];
	idx = 0;
}
Stack :: ~Stack(){
	cout<<"Destructor Called!"<<endl;
	delete []arr;
}

ostream& operator << (ostream& os, const Stack& stk){
	double *curr_stack = stk.getStack();
	os<<"Your stack contents are : " << endl;
	for(int i=0;i<stk.getSize();i++){
		os<<curr_stack[i]<< " ";
	}
	return os;
}


void Stack :: Push(double NewItem){
	if(idx==size){
		cout<<"Stack is Full";
		return;
	}
	arr[idx] = NewItem;
	idx++;
}

double Stack :: Pop(){

	double last = arr[idx];
	idx--;
	return last;
}

double* Stack :: getStack() const{
	return arr;
}
int Stack :: getSize() const{
	return idx;
}