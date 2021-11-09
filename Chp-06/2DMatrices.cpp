#include <iostream>
#include "Complex.cpp"

void printMatrix(Complex matrix[][20]){

	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

void printMatrix(Complex** matrix){

	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	Complex matrix [10][20];

	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			matrix[i][j] =  Complex (1.0, 0.0);
		}
	}
	cout<<"Contents of Matrix 1 :"<<endl<<endl;
	printMatrix(matrix);

	Complex** matrix2;
	matrix2 = new Complex*[10];
	for(int i=0;i<10;i++){
		matrix2[i] = new Complex[20];
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			matrix2[i][j] = Complex (1.0, 0.0);
		}
	}
	cout<<"Contents of Matrix 2 :"<<endl<<endl;
	printMatrix(matrix2);

	delete matrix2;

	Complex* matrix3[10];
	for(int i=0;i<10;i++){
		matrix3[i] = new Complex[20];
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			matrix3[i][j] = Complex (1.0, 0.0);
		}
	}
	cout<<"Contents of Matrix 3 :"<<endl<<endl;
	printMatrix(matrix3);
	

}