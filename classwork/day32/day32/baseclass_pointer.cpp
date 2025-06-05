#include <iostream>
using namespace std;

class Animal
{
public:
	void eat() {
		cout << "Eat";
	}
	void walk() {
		cout << "Walk";
	}
	void makeasound() {
		cout << "make a sound";
	}
	void soundLike() {
		cout << "Animal sound";
	}
};

class Cat :public Animal {
public:
	void dispCat() {
		cout << "cat";
	}
	void soundLike() {
		cout << "Meow!";
	}
};

class Dog :public Animal {
public:
	void dispDog() {
		cout << "Dog";
	}
	void soundLike() {
		cout << "Bow!";
	}
};

int main() {
	Cat c;
	Dog d;

	c.dispCat();
	cout << "can";
	c.eat();
	cout << "and can";
	c.walk();
	cout << " and also ";
	c.makeasound();
	cout << " like " << endl;
	c.soundLike();
	cout << "\n=======\n";
	d.dispDog();
	cout << "can";
	d.eat();
	cout << "and can";
	d.walk();
	cout << "and also";
	d.makeasound();
	cout << "like";
	d.soundLike(); 
	cout << "\n==========\n\n";

	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound
	return 0;
}


