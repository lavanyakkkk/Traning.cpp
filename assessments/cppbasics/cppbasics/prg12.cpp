//Write a Program to Remove Spaces From a String

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cout << "enter the string: " << endl;
	getline(cin, str);
	string result = "";
	for (int i = 0;i < str.length();i++) {
		if (str[i] != ' ') {
			result += str[i];

		}
	}
	cout << "the removed space from a string is " << result << endl;
}