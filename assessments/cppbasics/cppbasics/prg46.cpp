//Write a Program for Octal to Decimal Conversion

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int octal, decimal = 0, r, i = 0;
	cout << "enter the number: " << endl;
	cin >> octal;
	while (octal != 0) {
		r = octal % 10;
		decimal += r * pow(8, i);
		octal /= 10;
		i++;
	}
	cout << "the decimal number is: " << decimal << endl;
}