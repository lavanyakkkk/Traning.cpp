/*Write a Program to Print the Given String in Reverse Order*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cout << "enter the string: " << endl;
	cin >> str;
	reverse(str.begin(), str.end());
	cout << "the reversed string: " << str << endl;
	return 0;

}
