/*Write a Program to Print the Given String in Reverse Order in recursion*/

#include <iostream>
#include <string>
using namespace std;

string reverseString(string str, int i) {

	if (i == str.length()) {
		return "";
	}
	return reverseString(str, i + 1) + str[i];
}
int main() {
	string str;
	cout << "enter string: ";
	cin >> str;
	string reversed = reverseString(str, 0);
	cout << "reversed string: " << reversed << endl;
	return 0;
}