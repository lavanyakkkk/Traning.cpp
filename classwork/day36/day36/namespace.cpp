#include <iostream>

namespace geometery {
	const double pi = 3.14;

	double area(double r) {
		return  pi * r * r;
	}

}

int main() {

	double b = geometery::area(5);
	std::cout << "area is: " << b << std::endl;





	using namespace geometery;
	double a = area(2);
	std::cout << "area is: " << a << std::endl;
	return 0;

}
