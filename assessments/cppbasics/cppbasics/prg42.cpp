/*Write a Program to Swap the Values of Two Variables Without Using any Extra Variable*/

#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "enter the numbers: " << endl;
	cin >> num1 >> num2;
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "after swapping numbers " << num1  <<" "<<num2 <<endl;
	
}