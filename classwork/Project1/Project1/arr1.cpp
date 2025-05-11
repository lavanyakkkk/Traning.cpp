#include <iostream>
using namespace std;

int main() {
	int n, arr[20];
	cout << "enter a number of elements: " << endl;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	cout << "enter the elements: " << endl;
	for (int i = 0;i < n;i++) {
		cout << arr[i];
	}
	cout << "the elements are: " << arr[i] << endl;

	int largest = arr[0];
	for (int i = 1;i < n;i++) {
		if (arr[i] >= largest) {
			cout << "the largets element in array: " << largest << endl;
		}
	}
	return 0;
}