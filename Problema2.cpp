#include <iostream>
#include <memory>

 using namespace std;
 
 class Point{
	private:
 		double x;
		double y;
	public:	
		Point(double x,double y){
			this->x=x;
			this->y=y;		
		}
		void X(double a){
			x=a;
			cout<<x<<endl;
		}
		void Y(double a){
			y=a;
			cout<<y<<endl;
		}	
		void print(){
			cout << "(" << x << ", " << y << ")"<<endl;
		}
		~Point(){}
 };

int main(){
    unique_ptr<double> d = make_unique<double>(1.0);
	unique_ptr<Point> pt = make_unique<Point>(1.0,2.0);
	*d=2.0;
    pt->X(3.0);
	pt->print();

    pt->Y(3.0);
	pt->print();

    return 0;
}

 //Juan Carlos Castro Barreda