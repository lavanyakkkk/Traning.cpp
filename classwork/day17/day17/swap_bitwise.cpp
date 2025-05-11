#include <iostream>
using namespace std;
int main() {
	int a;
    int b;
	cout << "enter two numbers: " << endl;
	cin >> a, b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "after swapping a & b: " << a << b << endl;
	


}