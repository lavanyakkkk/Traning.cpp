/*
accepts n numbers in array
counts how many positive ,negative and zero in array
cal sum of positive array and product the negaitive
*/
#include <iostream>
using namespace std;
class numbers {
	int arr[10];
	int size;
public:
	void get_details() {
		cout << "enter the number of elements: " << endl;
		cin >> size;
		for (int i = 0;i < size;i++) {
			cin >> arr[i];
		}
	}

	void arr_positive() {
		int sum = 0;
		int count_positive = 0;
		for (int i = 0;i < size;i++) {
			if (arr[i] > 0) {
				count_positive++;
				sum += arr[i];
			}

		}
		cout << "the count of positve number is: " << count_positive << endl;
		cout << "the sum of positive number is: " << sum << endl;
	}

	void arr_negative() {
		int product = 1;
		int count_negative = 0;
		for (int i = 0;i < size;i++) {
			if (arr[i] < 0) {
				count_negative++;
				product *= arr[i];
			}
		}
		cout << "the count of negative number is: " << count_negative << endl;
		cout << "the product of negative number is: " << product << endl;

	}

	void arr_zero() {
		for (int i = 0;i < size;i++) {
			if (arr[i] == 0) {

			}
		}
		cout << "the given number is zero" << endl;
	}
};
int main() {
	numbers n;
	n.get_details();
	n.arr_positive();
	n.arr_negative();
	n.arr_zero();
	return 0;



}