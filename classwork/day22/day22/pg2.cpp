#include <iostream>
using namespace std;
int main() {
	int a[4] = { 10,20,30,40 };
	int* ptr = nullptr;
	ptr = a;
	//ptr = a + 1;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;

}