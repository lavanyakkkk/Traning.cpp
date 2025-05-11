#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "enter the character: " << endl;
	cin >> ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		cout << "the given charater is vowel" << ch << endl;
	}
	else 
	{
		cout << "the given character is consonent " << endl;

	}
}