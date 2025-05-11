/*Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers*/

#include <iostream>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int temp = a;
		b = a % b;
		a = temp;
	}
	return a;
}


	int lcm(int a, int b) 
	{
		return (a * b) / gcd(a, b);
	}
	int main() {
		int num1, num2;
		cout << "enter two numbers: ";
		cin >> num1 >> num2;
		cout << "the lcm of two numbers is : " << lcm(num1, num2) << endl;
		return 0;
	}
