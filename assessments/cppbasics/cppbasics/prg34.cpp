/*Write a Program to Print Floyd's Triangle*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter the number: " << endl;
	cin >> num;
	int count = 1;
	for (int i = 1;i <= num;i++) {
		for (int j = 1;j <= i;j++) {
			cout << count << " ";
			count++;
		}
		cout << endl;
	}
}