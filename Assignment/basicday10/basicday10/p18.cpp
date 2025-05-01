/*
Print the Sum of Even Numbers from 1 to N
Given N, find the sum of all even numbers between 1 and N.

*/

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number: " << endl;
	cin >> num;
	cout << "Print all the even numbers" << endl;
	for (int i = 1;i <= num;i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
		cout << endl;
		
	}
	return 0;
}