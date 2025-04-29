#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter number 1: ";
	cin >> a;
	cout << "enter number 2: ";
	cin >> b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "the swapping of two numbers  " << endl;
	cout << "the value of a is : " << a << endl;
	cout << "the value of b is : " << b << endl;
	
	return 0;

}
