/*
Find the Maximum of Three Numbers
Take three integers and print the largest using nested if-else.
*/

#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout << "enter number one: " << endl;
	cin >> num1;
	cout << "enter number two: " << endl;
	cin >> num2;
	cout << "enter number three: " << endl;
	cin >> num3;
	if (num1 >= num2 && num1 >= num3)
	{
		cout << "the first number is largest of all " << endl;
	}
	else if (num2 >= num3 && num2 >= num1)
	{
		cout << "the second number is largest of all" << endl;
	}
	else
	{
		cout << " the third number is largets of all " << endl;

	}
	return 0;


}