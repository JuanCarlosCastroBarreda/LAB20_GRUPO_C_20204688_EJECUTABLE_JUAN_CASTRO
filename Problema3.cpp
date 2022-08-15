#include <iostream>
#include <memory>

using namespace std;
 
class C1
{
	private:
		shared_ptr<double> d;
	public:
		C1(shared_ptr<double> value) : d(value) {}
		virtual ~C1() { cout << "C1 destructor\n"; }
		void print() const { cout << "Valor " << *d<<endl; }
};
class C2
{
	private:
		shared_ptr<double> d;
	public:
		C2(shared_ptr<double> value) : d(value) {}
		virtual ~C2() { cout << "\nC2 destructor\n"; }
		void print() const { cout << "Valor " << *d<<endl; }
};

int main(){
	
	shared_ptr<double> d =make_shared<double>(5.0);
	shared_ptr<C1> x = make_shared<C1>(d);
	shared_ptr<C2> y = make_shared<C2>(d);

	x->print();
	y->print();
	
	return 0;
}

 //Juan Carlos Castro Barreda