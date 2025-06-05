#include <iostream>
using namespace std;

class B {
public:
	void print() {
		cout << "print" << endl;
	}
	virtual void disp() {
		cout << "B" << endl;
	}
};

class D :public B {
public:
	void print() {
		cout << "print" << endl;
	}
	void disp() {
		cout << "B" << endl;
	}
};

int main() {
	D d;
	d.print();
	d.disp();


	B* ptr = new B;
	ptr->print();
	ptr->disp();
	//upcasting
	//implicit and safe
	ptr = &d;
	ptr->print();
	ptr->disp();

	




}