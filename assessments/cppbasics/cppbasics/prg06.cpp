/*Write a Program to Print Check Whether a Character is an Alphabet or Not*/

#include <iostream>
using namespace std;

void alphabet_not(char);

int main()
{
	char ch;
	cout << "enter the character: " <<endl;
	cin >>ch;
    alphabet_not(ch);
}

void alphabet_not(char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		cout << "the character is alphabet" <<endl;
	}
	else
	{
		cout << "the character is not a character" << endl;
	}
}
