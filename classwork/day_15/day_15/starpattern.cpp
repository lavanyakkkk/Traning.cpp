#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter a number: " << endl;
	cin >> num;
	for (int row = 1;row <= num;row++) {
		for (int column = 1;column <= row;column++) {
			cout << '*' << ' ';
		}
		cout << endl;

	}
	for (int row = num - 1;row >= 1;row--) {
		for (int column = 1;column <= row;column++) {
			cout << '*' << ' ';

		}
		cout << endl;
		
		
	}
	
	
	return 0;
}