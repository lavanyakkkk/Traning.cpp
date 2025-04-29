#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "enter number: ";
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0) {
		cout << "The given number is divisible by three and five" << endl;

	}
	else {
		cout << "The given number is not divisible by three and five" << endl;
	}
	return 0;
}
