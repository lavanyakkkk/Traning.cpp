#include <iostream>
using namespace std;
int main() {
	int* ptr = nullptr;
	int a = 10;
	ptr = &a;
	*ptr = 20;
	//cout << *ptr << endl;

	cout << *ptr << endl;
	cout << ptr << endl;
	cout << a << endl;
	cout << &a << endl;
	cout << &ptr << endl;


}

	