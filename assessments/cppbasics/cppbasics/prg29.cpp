/*Write a Program to Print the Hourglass Pattern*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter the num: " << endl;
	cin >> num;
	for (int i = 1;i <= num;i++) {
		for (int space = 1;space < i;space++) {
			cout << " ";
		}
		for (int j = 1;j <= 2 * (num - i) + 1;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = num-1;i >=1;i--) {
		for (int space = 1;space < i;space++) {
			cout << " ";
		}
		for (int j = 1;j <= 2 * (num - i) + 1;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}