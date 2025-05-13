#include <iostream>
using namespace std;
int main() {
	int a[3] = { 10,20,30};
	cout << a[0] << "\t" << a[1] << "\t" << a[2] <<endl;

	int* ptr = nullptr;

	//ptr = &a[0];
	ptr = &a[0];
	cout << *ptr << endl;

	//ptr = &a[1];
	ptr = (ptr + 1);
	cout << *ptr << endl;

	ptr = ptr + 1;
	cout << "last element" << *ptr << endl;

	ptr = ptr + 1;
	
	cout << *ptr << endl;

	ptr = ptr - 1;
	cout << *ptr << endl;

	ptr = ptr - 1;
	cout << *ptr << endl;



	

}