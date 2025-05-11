/*Write a Program to Find the ASCII Value of a Character*/

#include <iostream>
using namespace std;

void func(char);

int main() 
{
	char ch;
	cout << "enter a character: " << endl;
	cin >> ch;
	func(ch);
	return 0;

}

void func(char c)
{
	cout << "the ascii value of character is: " <<int(c)<< endl;
}


