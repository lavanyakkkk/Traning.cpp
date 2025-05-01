/*
Find Factorial of a Number
Input a number and calculate its factorial using a loop.

*/

#include <iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout << "enter num: " << endl;
	cin >> num;
	if (num < 0)
	{
		cout << "the number is negative numbers" <<num<< endl;
	}
	else
	{
		for (int i = 1;i <= num;i++)
		{
			fact *= i;
			
		}
		cout << "The factorial of numbers is: " << fact << endl;
	}
	return 0;
}