/*Write a Program to Check if Two Strings are Anagram or Not*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool areanagaram(string str1, string str2) {
	if (str1.length() != str2.length()) {
		return false;
	}
	return true;
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	if (str1 == str2) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	string str1, str2;
	cout << "enter the string: " << endl;
	cin >> str1 >> str2;
	if (areanagaram(str1, str2)) {
		cout << "it is  palindrome " << endl;
	}
	else {
		cout << "it is not a palindrome" << endl;
	}
	return 0;

}