/*
Reverse a Number
Input a number and print its reverse using loops.
Example: 123 → 321

*/

#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout << "enter num: " << endl;
	cin >> num;
	while (num > 0) 
	{
		int rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
		

	}
	cout << sum << endl;
	return 0;
	


}