#include <iostream>
using namespace std;

class A {
protected:
	int a;
	void dispPrt() {
		cout << "A:Method of protected" << endl;
	}
public:
	A() { a = 10; } //defalut const
	void dispA() {
		cout << "A:a= " << a << endl;
	}
};


class B :public A { //interface
public:
	void dispB() {
		a = 20;
		dispPrt();
		dispA;
	}
};
int main() {
	B objB;
	objB.dispB();
	objB.dispA();
}