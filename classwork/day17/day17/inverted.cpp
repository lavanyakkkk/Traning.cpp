#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "enter the number: " << endl;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		for (int j = 0;j <= i;j++) { //this loop prints spaces
			cout << " ";
		}
		for (int k = 0;k <= n - i;k++) { //this loop print star for eac row
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 1;i < n;i++) {
		for (int j = 0;j < n - i - 1;j++) {
			cout << " ";
		}
		for (int k = 0;k < i;k++) {
			cout << "* ";
		}
		cout << endl;
	}



}