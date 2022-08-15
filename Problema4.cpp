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
    shared_ptr<Point> p  = make_shared<Point>(5.0,2.0);
	p->print();

    return 0;
}

 //Juan Carlos Castro Barreda