/*
* Check if Two Numbers are Equal Using Only Bitwise XOR
Without using ==, check if two numbers are equal.
Hint: If (a ^ b) == 0, they are equal.

*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter number a: " << endl;
	cin >> a;
	cout << "Enter number b: " << endl;
	cin >> b;
	if ((a ^ b) == 0)
	{
		cout << "the given two numbers are equal" << endl;

	}
	else 
	{
		cout << "The given two numbers are not equal" << endl;

	}
	return 0;
}