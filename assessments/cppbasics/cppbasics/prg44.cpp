//Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "enter two numbers: " << endl;
	cin >> num1 >> num2;
	if (num1 ^ num2) {
		cout << "the gn number is not equal" << endl;
	}
	else {
		cout << "the gn number is  equal" << endl;
	}
	return 0;
}