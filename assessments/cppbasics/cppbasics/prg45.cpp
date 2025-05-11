//Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num1, num2;
	cout << "enter two numbers: " << endl;
	cin >> num1>> num2;

	int min_num = (num1 + num2 - abs(num1 - num2)) / 2;
	int max_num = (num1 + num2 + abs(num1 - num2)) / 2;

	cout << "the maximum  of two numbers: " << max_num << endl;
	cout << "the minimum  of two numbers: " << min_num << endl;


	return 0;

}