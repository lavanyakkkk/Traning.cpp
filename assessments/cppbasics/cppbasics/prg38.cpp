/*Write a Program to Calculate the Length of the String Using Recursion*/

#include <iostream>
using namespace std;
int string_length(string str) {
	if (str == "") {
		return 0;
	}
	else {
		return 1 + string_length(str.substr(1));
	}
}
int main() {
	string str;
	cout << "enter the string: ";
	cin >> str;
	int length = string_length(str);
	cout << "the length of string: " << length << endl;
	return 0;
}














