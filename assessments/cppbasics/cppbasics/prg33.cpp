/*Write a Program to Print a Triangle Star Pattern*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	for (int i = 1;i <= num;i++) {
		for (int space = 1;space <= num - i;space++) {
			cout << " ";
		}
		for (int j = 1;j <= i;j++) {
			cout << "* ";
		}
		cout << endl;
	}
	
}