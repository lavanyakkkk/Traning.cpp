#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "enter the number: " << endl;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int space = 5;space < n - i;space++) {
			cout << " ";
		}
		for (int j = 1;j <= 2 * n - 1;j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;

}