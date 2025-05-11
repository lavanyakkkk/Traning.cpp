//Write a Program to Print All Natural Numbers up to N Without Using a Semi - Colon

#include <iostream>
using namespace std;
void natural_number(int n) {
	if (n > 0) {
		natural_number(n - 1);
		cout << n << endl;
	}

}
int main() {
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	natural_number(num);
	cout << endl;
	return 0;

}