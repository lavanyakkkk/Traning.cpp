//area and circumference

#include <iostream>
using namespace std;
#define pi 3.14
int main() {
	int radius;
	float area, circumference;
	cout << "enter the radius: " << endl;
	cin >> radius;
	area = pi * radius * radius;
	circumference = 2 * pi * radius;
	cout << "the area of circle: " << area << endl;
	cout << "the circumference of circle: " <<circumference<< endl;



}