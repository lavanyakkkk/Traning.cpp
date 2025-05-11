/*Write a Program to Check Palindrome*/

#include <iostream>
using namespace std;
void palindrome(int);
int main()
{
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	palindrome(num);
	return 0;
}

void palindrome(int num) {
	int res=0;
	int original_num = num;
	while (num > 0) {
		int rem = num % 10;
		res= res*10+rem;
		num /= 10;
	}
	if (original_num == res) {
		cout << "the number is palindrome" << original_num << endl;
	}
	else {
		cout << "the number is not a palindrome" << original_num << endl;
	}
}