/*Write a Program to Check if the Given String is Palindrome or not Using Recursion*/

#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string str, int left, int right) {
	if (left >= right)
		return true;
	if (str[left] != str[right])
		return false;
	return ispalindrome(str, left + 1, right - 1);
}
int main() {
	string str;
	cout << "enter a string: ";
	cin >> str;
	if (ispalindrome(str, 0, str.length() - 1))
		cout << "it is a palindrome" << endl;
	else
		cout << "it is not a palindrome" << endl;
	return 0;
}