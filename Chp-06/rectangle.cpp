#include <iostream>
using namespace std;

struct Point
{
	double x,y;
};
int main(){

	Point *arr = new Point[4];
	arr[0].x = 0;
	arr[0].y = 0;

	arr[1].x = 0;
	arr[1].y = 1;

	arr[2].x = 1;
	arr[2].y = 0;

	arr[3].x = 1;
	arr[3].y = 1;
	
	for(int i=0;i<4;i++){
		cout<<arr[i].x<<" "<<arr[i].y<<endl;
	}

}