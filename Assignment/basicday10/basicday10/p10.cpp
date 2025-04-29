/*
12. Find Sum of Digits of a Number
Input a number and find sum of its digits using a while loop.
*/

#include <iostream>
using namespace std;
int main()
{
	int sum = 0, num;
	cout << "enter number: " << endl;
	cin >> num;
	int i = 0;
	while (i <= num) 
	{
		sum = sum + i;
		i++;

	}
	cout << "the sum of digits is: " << sum;


}