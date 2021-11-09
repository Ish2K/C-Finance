#include <iostream>
#include "Complex.cpp"

// Call by value
void MySwap(Complex c1, Complex c2)
{
	Complex c3 = c1;
	c1 = c2;
	c2 = c3;
	return;
} 

void MySwap2(Complex& c1, Complex& c2) // Call by reference
{
	Complex c3 = c1;
	c1 = c2;
	c2 = c3;
	return;

}
/*
Gives Compilation error since we cannot reassign a const!
void MySwap3(const Complex& c1, const Complex& c2) // const references
{
	Complex c3 = c1;
	c1 = c2;
	c2 = c3;
	return;
}
*/


void MySwap4(Complex* c1, Complex* c2){

	Complex* c3 = c1;
	c1 = c2;
	c2 = c3;
	return;
}

/*
Gives Compilation error since we cannot reassign a const!
void MySwap5(const Complex* c1, const Complex* c2)
{
	Complex c3 = c1;
	c1 = c2;
	c2 = c3;
	return;
}
*/
int main(){
	//Swap1
	cout << "SWAP - 1 " << endl;
	Complex c11(5,9);
	Complex c12(7,8);

	cout<<"Original Value of C1 - "<<c11<<endl;
	cout<<"Original Value of C2 - "<<c12<<endl;

	MySwap(c11,c12);
	cout<<"Final Value of C1 - "<<c11<<endl;
	cout<<"Final Value of C2 - "<<c12<<endl;

	/*
	Swap1 does not work since we are creating a copy of the object in different memory location.
	Thus, original values remains same.
	*/

	//Swap 2

	cout << "SWAP - 2 " << endl;
	Complex c21(5,9);
	Complex c22(7,8);

	cout<<"Original Value of C1 - "<<c21<<endl;
	cout<<"Original Value of C2 - "<<c22<<endl;

	MySwap2(c21,c22);
	cout<<"Final Value of C1 - "<<c21<<endl;
	cout<<"Final Value of C2 - "<<c22<<endl;

	/*
	Swap2 work since we are passing the reference the object i.e the original memory address.
	Any changes made inside the function will alter the values of original memory address.
	Thus, original values swaps successfully.
	*/
	cout<<endl;
	cout<< "Swap3 gives compilation error since we are trying to reassign value to constant variable "<<endl;
	cout<<endl;
	//Swap4
	cout << "SWAP - 4 " << endl;
	Complex c41(5,9);
	Complex c42(7,8);

	cout<<"Original Value of C1 - "<<c41<<endl;
	cout<<"Original Value of C2 - "<<c42<<endl;

	MySwap4(&c41,&c42);
	cout<<"Final Value of C1 - "<<c41<<endl;
	cout<<"Final Value of C2 - "<<c42<<endl;


	//Swap4 Does not work since we are swapping the pointers but not the data itself.

	cout<<endl;
	cout<< "Swap5 gives compilation error since we are trying to reassign value to constant variable "<<endl;
	cout<<endl;


	//Best solution is Swap2.
}