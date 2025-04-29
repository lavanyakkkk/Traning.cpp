/*
* Check if a Character is an Uppercase Letter
Take a character input and check if it is between 'A' and 'Z'.
*/


#include <iostream>
using namespace std;
int main()
{
	char single_character;
	cout << "enter  character: ";
	cin >> single_character;
	if (isupper(single_character)) {
		cout << "The given character is in upper case" << endl;
	}
	else {
		cout << "The given charatcer is not upper case" << endl;
	}
}