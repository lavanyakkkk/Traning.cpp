/*Write a Program to Check Whether a Character is a Vowel or Consonant*/

#include <iostream>
using namespace std;

void vowel_consonant(char);

int main() {
	char ch;
	cout << "enter the character: " << endl;
	cin >> ch;
	vowel_consonant(ch);

}

void vowel_consonant(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		cout << "the given character is vowel" << endl;
	}
	else {
		cout << "the given character is consontnat " << endl;
	}
}