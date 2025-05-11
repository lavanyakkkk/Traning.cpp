//Write a Program to Remove All Characters From a String Except Alphabets

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "enter the string: " << endl;
	cin >> str;
	string result = " ";
	for (int i = 0;i <= str.length();i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
			result += str[i];

		}
	}
	cout << "the removal all character from a string except alphabets is: " << result << endl;
}