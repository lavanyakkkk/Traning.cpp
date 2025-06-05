#include <iostream>
using namespace std;

class A {
private:
	int x;
protected:
	int y;
	void ProMethod() {
		cout << "A:prot got cqalled" << endl;
	}
public:
	A() { cout << "A constant got called" << endl;
	x = 10;y = 20; }
	void dispA() { 
		cout << "\tHello from A" << endl;
		cout << "x= " << x << "\ty=" << y << endl;
	}



};

//derived class
class B :public A
{
private:
	int a;
protected:
	int b;
public:
	B() {
		cout << "B constant got called" << endl;
		a= 11;b = 22;
	}
	void DispB() {
		cout << "\tHello from A" << endl;
		cout << "a= " << a << "\tb=" << b << endl;

	}
	void proA() {
		ProMethod();
	}



};

int main() {
	A objA;
	B objB;
	objA.dispA();
	objB.DispB();  // Fixed method name
	return 0;
}
