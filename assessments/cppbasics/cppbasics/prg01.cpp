/*Write a C++ Program to Check Whether a Number is a Positive or Negative Number*/
#include <iostream>
using namespace std;
void number_check(int n1);

int main() 
{
	int n1;
	cout << "enter the number: " << endl;
	cin >> n1;
	number_check(n1);
	return 0;
}
void number_check(int n1) {
	if (n1 > 0) {
		cout << "the number is positive" << endl;
	}
	else if (n1 < 0) {
		cout << "the number is negative " << endl;
	}
	else
	{
		cout << "the number is zero" << endl;
	}
}