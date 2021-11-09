#include <iostream>
using namespace std;

class Pointer_Class
{
public:
	int a,b;

	Pointer_Class(){a=0;b=0;};
	~Pointer_Class();
	
};
//FOR TESTING AND ROUGH WORK ONLY!
int main(){

	Pointer_Class** ptr = new Pointer_Class*[10];
	for(int i=0;i<10;i++){
		ptr[i] = new Pointer_Class[20];
	}
	int cnt = 0;
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			ptr[i][j].a = cnt;
			cnt++;
		}
	}
	Pointer_Class *ptr2 = ptr[0];

	cout<<&((*(ptr2+1)));
}