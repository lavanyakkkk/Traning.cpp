/*Write a Program to Calculate the Factorial of a Number Using Recursion*/

#include <iostream>
using namespace std;
int func(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * func(n - 1);
	}
}
int main() {
	int num;
	cin >> num;
	cout << "the factorial of number is: " << func(num) << endl;
	return 0;
}