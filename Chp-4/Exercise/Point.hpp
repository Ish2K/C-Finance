using namespace std;
class Point{	
public:
	double x;
	double y;
public:
	Point(){
		x = 0.0;
		y = 0.0;
	}
	Point(double a,double b){
		x = a;
		y = b;
	}
	double& WrongFunction()
	{
		static double d = 3.1415; 
		return d;
	}
	void print(){
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};