#include <iostream>
using namespace std;
int func(int, int) {
	return (a,
}
int main() {
	int num1, num2;
	cout << "enter two numbers: " << endl;
	cin >> num1 >> num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	int res = func(num1, num2);
	cout<<res << num1 <<" " << num2;
}
