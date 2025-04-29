/*
Check Voting Eligibility
Input age. If >= 18, print "Eligible"; else, "Not Eligible".
*/

#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "enter age: " << endl;
	cin >> age;
	if (age >= 18)
	{
		cout << "you are eligible" << endl;
	}
	else
	{
		cout << "you are not eligible" << endl;
	}
	return 0;
}