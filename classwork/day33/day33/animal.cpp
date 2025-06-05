#include <iostream>
using namespace std;
//abstract base class
class Animal {
public:
	virtual void eat()=0;
	virtual void drink()=0;
	virtual void breath()=0;
	virtual void sleep()=0;
	virtual void lifetime() = 0;//without giving body in the derived class we can get
};

class Cat : public Animal
{
public:
	virtual void eat() {}
	virtual void drink() {}
	virtual void breath() {}
	virtual void sleep() {}
	virtual void lifetime() {};
};

class Dog :public Animal
{
public:
	
	virtual void lifetime() = 0;
};

int main() {
	Cat c;
	return 0;

}