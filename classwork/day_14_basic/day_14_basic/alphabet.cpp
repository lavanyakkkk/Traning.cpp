#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "enter a alphabet: " << endl;
	cin >> ch;
	if ((ch == 'a' && ch == 'z') ||(ch == 'A' && ch == 'z')) {
		cout << "the given one is alphabet" << ch << endl;
	}
	else
	{
		cout << "it is not a alphabet" << endl;
	}
}