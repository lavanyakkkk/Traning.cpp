#include <iostream>
using namespace std;

//base class
class A {
	int a;
public:
	A(int x) :a(x) {
		cout << "const a got called" << endl;
	}
	~A() {
		cout << "dest b got called" << endl;

	}
		void dispA() 
		{
			cout << "a:= " << a << endl;
		}
	
};
//base2
class B{
	int b;
public:
	B(int y) :b(y) {
		cout << "const a got called" << endl;
	}
		void dispA()
		{
			cout << "b:= " << b << endl;
		}

};

class C :public A, public B
{
	int c;
public:
	C(int x, int y, int z) :A(x), B(y), c(z) {
		cout << "Const c got called" << endl;
	}
	void dispC() {
		cout << "c: " << endl;
	}

};

int main() {
	C obj(10, 20, 30);
}