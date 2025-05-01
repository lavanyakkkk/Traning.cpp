/*
Print All Odd Numbers from 1 to N
Given N, print all odd numbers up to N using a loop.
*/

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	cout << "print all odd numbers: " << endl;
	for (int i = 1;i <= num;i++)
	{
		if (i % 2 != 0)
		{
			int storing_var = i;
			cout<< storing_var <<" ";
		}
		cout << endl;

	}
	return 0;

}