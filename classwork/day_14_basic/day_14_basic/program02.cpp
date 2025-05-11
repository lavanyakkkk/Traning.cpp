//greatest of all 5 numbers

#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3, num4, num5;
	cout << "enter numbers: " << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	int great = num1;
	if (num2 > great) {
		great = num2;
	}
	if (num3 > great) {
		great = num3;
	}
	if (num4 > great) {
		great = num4;
	}
	if (num5 > great) {
		great = num5;
	}
	cout << "the number is greater" << great << endl;
	
	
	
	return 0;
}