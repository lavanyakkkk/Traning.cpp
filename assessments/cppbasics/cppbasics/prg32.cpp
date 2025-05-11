/*Write a Program to print an Inverted Pyramid*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	for (int i = 0;i < num;i++) {
		for (int space = 0;space < i;space++) {
			cout << " ";
		}
		for (int j = 0;j < 2 * (num - i) - 1;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;

}