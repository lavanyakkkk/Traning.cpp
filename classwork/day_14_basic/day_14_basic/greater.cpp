#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout << "enter three numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	if ((num1 >= num2) && (num1 >= num3))
	{
		cout << "the first number is greater than all" << num1<<endl;
	}
	else if ((num2 >= num1) && (num2 >= num3)) {
		cout << "the second number is greater than all " << num2 << endl;

	}
	else
	{
		cout << "the third number is greatest than all" << num3 << endl;
	}
	return 0;

}