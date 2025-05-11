/*Write a Program to Calculate the Greatest Common Divisor of Two Numbers*/

#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "enter numbers: " << endl;
	cin >> num1 >> num2;
	if (num1 == 0 || num2 == 0) {
		cout << "GCD is: " << max(num1, num2) << endl;  
		return 0;
	}

	while (num2 != 0) {
		int temp = num2;
		num2 = num1 % num2;
		num1 = temp;

	}
	cout << "gcd of two numbers is: " << num1  << endl;
}