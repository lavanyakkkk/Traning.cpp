/*
Find Remainder Without Using% Operator
Given two integers a and b, find a% b without using% .
Hint: Use a - (a / b) * b
*/

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter number a: ";
	cin >> a;
	cout << " enter number b: ";
	cin >> b;
	cout <<"the value of dividing two numbers remainder is: "<< a - (a / b) * b<<endl;
	return 0;
	
}

