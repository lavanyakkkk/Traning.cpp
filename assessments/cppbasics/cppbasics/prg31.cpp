/*Write a Program to Print a Simple Pyramid Pattern*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter the number: " <<endl;
	cin >> num;
	for (int i = 0;i < num;i++) {
		for (int space = 0;space < num - i - 1;space++) {
			cout << " ";
		}
		for (int j = 0;j <= i;j++) {
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}
