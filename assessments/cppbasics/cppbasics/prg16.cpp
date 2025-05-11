//Write a Program to Check the Prime Number
#include <iostream>
using namespace std;
int isprime(int num) {
	if (num == 1) {
		return 0;
	}
	if (num == 2) {
		return 1;
	}
	for (int i = 2;i <= num;i++) {
		if (num % 2 == 0) {
			return false;
		}
	}
	return 1;
}
int main() {
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	if (isprime(num) == 1) {
		cout << num << " is a prime number." << endl;
	}
	else {
		cout << num << " is not a prime number." << endl;
	}

	return 0;
}
