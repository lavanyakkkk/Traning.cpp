#include <iostream>
using namespace std;
int main() {
	int num,fact=1;
	cout << "enter the number: " << endl;
	cin >> num;
	for (int i = 1;i <= num;i++) {
		fact *= i;
	}
	cout << "the factorial of number : " << fact << endl;
	return 0;
}