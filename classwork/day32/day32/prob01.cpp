#include <iostream>
using namespace std;

class Vehicle {
protected:
	string make_type;
	string model_type;
public:
	Vehicle(string make_type, string model_type) {
		this->make_type = make_type;
		this->model_type = model_type;
	}
	void display_start() {
		cout << "the car is  " << make_type << " started " << model_type << endl;
	}
	void display_stop() {
		cout << "the car is " << make_type << " stop " << model_type << endl;
	}
};

class Car :public Vehicle {
protected:
	int doors;
public:
	Car(string make_type, string model_type, int doors) :Vehicle(make_type, model_type) {
		this->doors = doors;
	}
	void display_honk() {
		cout << "the car's horn is horked" << endl;
	}

};

int main() {
	Vehicle v("generic", "vehicle");
	v.display_start();
	v.display_stop();

	Car c("Toyota", "Camry", 4);

	c.display_start();
	c.display_stop();
	c.display_honk();
}
