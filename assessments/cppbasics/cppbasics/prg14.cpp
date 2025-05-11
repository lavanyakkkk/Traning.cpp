/*Write a Program to Find the Factorial of a Number Using Loops*/

#include <iostream>
using namespace std;

void func(int);

int main() {
	int num;
	cout << "enter the number: " <<endl;
	cin >> num;
	func(num);
	return 0;

}

void func(int num) {
	int factorial = 1;
	for (int i = 1;i <= num;i++) {
		factorial *= i;
	}
	cout << "the factorial number is: " << factorial<<endl;
}