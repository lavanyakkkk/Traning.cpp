/*
Problem 3: Find nth Fibonacci Number
Problem Statement:
Write a recursive function to return the nth Fibonacci number.
(Fibonacci series: 0, 1, 1, 2, 3, 5, 8, ...)
*/

#include <iostream>
using namespace std;
int func(int num) {
	if (num == 0 || num==1) {
		
		return num;
	}
	else {
		return func(num - 1) + func(num - 2);
	}

	
}
int main()
{
	int n;
	cout << "enter number: " << endl;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cout << func(i) << " ";
	}
	return 0;
}