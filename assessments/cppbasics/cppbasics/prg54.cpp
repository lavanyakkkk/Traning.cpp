//Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include <iostream>
using namespace std;
int main() {
	float fahrenheit, celsius;
	cout << "enter the fahrenheit: " << endl;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "the degree of celsius is: " << celsius << endl;
	return 0;

}