#include <iostream>
using namespace std;

class Vehicle {
protected:
	int wheels;
	int seats;
	string materials;
	string modeOfControl;
	string color;

public:
	void setVehicle(int wheels,int seats,string materials,string modeOfControl, string color) {
		this->seats = seats;
		this->wheels = wheels;
		this->materials = materials;
		this->modeOfControl = modeOfControl;
		this->color = color;
	}

	void displayA() {
		cout << "Vehicle Details\n";
		cout << wheels << "\t" << seats << "\t" << materials << "\t";
		cout << color << "\t" << modeOfControl << endl;
	}
};

class car :public Vehicle
{
private:
	string brand;
	string fuelType;
	int doors;
	float price;
	string variantType;
	string model;

public:
	car(string brand, string fuelType, int doors, float price, string variantType, string model): Vehicle(wheels,seats, materials, modeOfControl, color) {

		this->brand=brand;
		this->fuelType=fuelType;
		this->doors=doors;
		this->price=price;
		this->variantType=variantType;
		this->model=model;
	}


	void displayB(){
		cout << "Vehicle Details\n";
		cout << "Brand: " << brand << "fuel Type: " << fuelType << "Doors: " << doors << "price: " << price << "Varaint type: " << variantType << "Model: " << model << endl;
	}
		
};

int main() {

	car c("Audi", "petrol", 4, 1023434.0f, "varia", "A4");

	c.displayA();
	c.displayB();
}