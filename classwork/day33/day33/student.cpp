#include <iostream>
using namespace std;

class A {
public:
	void dispA() {
		cout << "A is displayed" << endl;
	}
};

class B :public A {
public:
	void dispB() {
		cout << "B is displayed" << endl;
	}
};

class C : public B, public A {

};