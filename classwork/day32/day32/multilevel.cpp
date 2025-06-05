#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int a;
public:
    A(int x) : a(x) {
        cout << "const A got called" << endl;
    }
    ~A() {
        cout << "dest A got called" << endl;
    }
    void dispA() {
        cout << "a := " << a << endl;
    }
};

// Intermediate class inheriting from A
class B : protected A {
protected:
    int a;
    void dispA();
protected:
    int b;
public:
    B(int x, int y) : A(x), b(y) {
        cout << "const B got called" << endl;
    }
    ~B() {
        cout << "dest B got called" << endl;
    }
    void dispB() {
        cout << "b := " << b << endl;
        cout << "a:= " << a << endl;
    }
};

// Derived class inheriting from B
class C : public B {
    int c;
public:
    C(int x, int y, int z) : B(x, y), c(z) {
        cout << "const C got called" << endl;
    }
    ~C() {
        cout << "dest C got called" << endl;
    }
    void dispC() {
        cout << "c := " << c << endl;
        cout << "b := " << b << endl;
        cout << "a:= " << a << endl;
    }
};
    int main() {
        C obj(10, 20, 30);
       // obj.dispA();
        obj.dispB();
        obj.dispC();
        return 0;
    }


    

   