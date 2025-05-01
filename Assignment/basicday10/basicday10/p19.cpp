/*
Print Multiplication Table of a Number
Input a number n. Print its multiplication table up to 10.
*/

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter num: " << endl;
	cin >> num;
	for (int i = 1;i <= 10;i++) {
		cout << "Table of" << i << endl; ;
		for (int j = 1;j <= 10;j++) {
			cout << i << " x " << j << " = " << i * j << endl;

		}
		cout << endl;
	}
	return 0;
	
}