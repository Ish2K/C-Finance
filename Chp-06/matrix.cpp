#include <assert.h>
#include <math.h>
using namespace std;
double ** addMatrix(double** m1,double** m2,const int N,const int M){


	double** m3 = new double*[N];
	for(int i=0;i<N;i++){
		m3[i] = new double[M];
		for(int j=0;j<M;j++){
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	return m3;
}

double ** subtractMatrix(double** m1,double** m2,const int N,const int M){

	double** m3 = new double*[N];
	for(int i=0;i<N;i++){
		m3[i] = new double[M];
		for(int j=0;j<M;j++){
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
	return m3;
}

double ** multiplyMatrix(double** m1,double** m2,const int N1,const int M1,const int N2,const int M2){

	assert(M1==N2);
	double** m3 = new double*[N1];
	for(int i=0;i<N1;i++){
		m3[i] = new double[M2];
		for(int j=0;j<M2;j++){
			double sm = 0;
			for(int k=0;k<M1;k++){
				sm += (m1[i][k]*m2[k][j]);
			}
			m3[i][j] = sm;
		}
	}
	return m3;
}

double** ScalarMatrix(double** m1,double scalar,const int N,const int M){

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			m1[i][j]*=scalar;
		}
	}
	return m1;
}
double minMatrix(double** m1,const int N,const int M){

	double minElement = 1e10;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			minElement = min(minElement,m1[i][j]);
		}
	}
	return minElement;
}
double maxMatrix(double** m1,const int N,const int M){

	double maxElement = -1e10;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			maxElement = max(maxElement,m1[i][j]);
		}
	}
	return maxElement;
}

double avgMatrix(double** m1,const int N,const int M){

	double sm = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			sm += m1[i][j];
		}
	}
	return (sm/(N*M));
}

double sumSquaresMatrix(double** m1,const int N,const int M){

	double sm = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			sm += (m1[i][j]*m1[i][j]);
		}
	}
	return sm;
}

void printMatrix(double** matrix,const int N,const int M){
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cout<<matrix[i][j]<< " ";
		}
		cout<<endl;
	}
}