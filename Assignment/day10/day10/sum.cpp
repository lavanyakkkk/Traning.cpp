#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int  num1, num2;
	cout << "enter two numbers:" << endl;
	cin >> num1 >> num2;
	int res = add(num1, num2);
	if (res % 2 == 0)
		cout << "teh given number is even" << res << endl;
	return 0;

}