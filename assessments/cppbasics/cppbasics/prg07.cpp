/*Write a Program to Find the Length of the String Without using strlen() Function*/

#include <iostream>
using namespace std;

void length_string(string);

int main()
{
	string str;
	cout << "enter the string: " << endl;
	cin >> str;
	length_string(str);
}

void length_string(string str)
{
	int length = 0;
	for (int i = 0;str[i] != 0;i++) {
		length++;
	}
	cout << "the length of the string is : " << length << endl;
}