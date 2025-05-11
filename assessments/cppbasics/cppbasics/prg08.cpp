/*Write a Program to Toggle Each Character in a String*/

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

void upper_lower_string(string);

int main()
{
	string str;
	cout << "Enter the string: " << endl;
	getline(cin, str);  // Read the whole line of input, including spaces
	upper_lower_string(str);
}

void  upper_lower_string(string str)
{
	for (int i = 0;i < str.length();i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	cout << "the toggle character is: " << str << endl;
	
}