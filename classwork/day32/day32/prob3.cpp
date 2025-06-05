#include <iostream>
using namespace std;

class Vehicle {
protected:
	int id;
	float price;
public:
	Vehicle(float price, int id) {
		this->id = id;
		this->price = price;
	}

	void display_Vehicle() {
		cout << "id: " << id << endl;
		cout << "price: " << price << endl;
	}
};

class Car :public Vehicle {
protected:
	int seat_capacity;
	int doors;
	string fuel_type;
public:
	Car(float price, int id, int seat_capacity, int doors, string fuel_type)
		: Vehicle(price, id) {
		this->seat_capacity = seat_capacity;
		this->doors = doors;
		this->fuel_type = fuel_type;
	}

	void display_car() {
		cout << "seat capacity: " << seat_capacity << endl;
		cout << "doors: " << doors << endl;
		cout << "fuel_type: " << fuel_type << endl;
	}
};

class Motorcycle :public Vehicle {
protected://numberof cylinders, the number of gears and the number of wheels.
	int num_cyclinder;
	int num_gears;
	int num_wheels;
public:
	Motorcycle(float price, int id, int num_cyclinder, int num_gears, int num_wheels) :Vehicle(price, id) {
		this->num_cyclinder = num_cyclinder;
		this->num_gears = num_gears;
		this->num_wheels = num_wheels;
	}

	void display_Motorcycle() {
		cout << "num of cyclinder: " << num_cyclinder << endl;
		cout << "num_gears: " << num_gears << endl;
		cout << "num_wheels: " << num_wheels << endl;
	}
};

class Audi :public Car {
protected:
	string model_type;
public:
	Audi(float price, int id, int seat_capacity, int doors, string fuel_type, string model_type) :Car(price, id, seat_capacity, doors, fuel_type) {
		this->model_type = model_type;
	}
	void display_audi() {
		cout << "model_type: " << model_type << endl;
	}
};

class Yamaha :public Motorcycle {
protected:
	string make_type;
public:
	Yamaha(float price, int id, int num_cylinder, int num_gears, int num_wheels, string make_type)
		: Motorcycle(price, id, num_cylinder, num_gears, num_wheels) {
		this->make_type = make_type;
	}


	void display_yamaha() {
		cout << "make_type: " << make_type << endl;
	}
};

int main() {
	Audi a(5000000, 1, 5, 4, "Petrol", "Q7");
	Yamaha y(120000, 2, 2, 5, 2, "FZ");

	cout << "--- Audi Details ---" << endl;
	a.display_car();
	a.display_audi();

	cout << "\n--- Yamaha Details ---" << endl;
	y.display_Vehicle();
	y.display_yamaha();

	return 0;
}

