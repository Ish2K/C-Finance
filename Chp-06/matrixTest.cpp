#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#include "matrix.cpp"
using namespace std;

int main(){
	const int N = 3;
	const int M = 5;

	double** m1 = new double*[N];
	double** m2 = new double*[M];

	srand(time(0));
	for(int i=0;i<N;i++){
		m1[i] = new double[M];
		for(int j=0;j<M;j++){
			m1[i][j] = (double)(rand()%10);
		}
	}

	for(int i=0;i<M;i++){
		m2[i] = new double[N];
		for(int j=0;j<N;j++){
			m2[i][j] = (double)(rand()%10);
		}
	}
	cout << "Matrix 1 - "<<endl;

	printMatrix(m1,N,M);

	cout<< "Matrix 2 - "<<endl;
	printMatrix(m2,M,N);

	cout<< endl;

	cout<<"Multiplying M1 and M2"<<endl;
	double**m3 = multiplyMatrix(m1,m2,N,M,M,N);
	
	printMatrix(m3,N,N);

	for(int i=0;i<N;i++){
		delete m1[i];
	}
	for(int i=0;i<M;i++){
		delete m2[i];
	}
	for(int i=0;i<N;i++){
		delete m3[i];
	}

	delete []m1;
	delete []m2;
	delete []m3;

	printMatrix(m2,M,N);
	return 0;
}