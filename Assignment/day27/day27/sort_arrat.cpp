/*FUNCTIONS
1.GET BIGGEST OF ARRAY ELEMENTS
2.GET ARRAY SORTED IN ASCENDING ORDER
3.GET ARRAY SORTED IN DESCENDING ORDER*/

#include <iostream>
using namespace std;
class Array_elements {
	int arr[10];
	int size;
public:
	void getarray() {
		cout << "enter the size of elements: " << endl;
		cin >> size;
		for (int i = 0;i < size;i++) {
			cin >> arr[i];
		}
	}
	void max_element()
	{
		int max = arr[0];
		for (int i = 0;i < size;i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		cout << "the biggest element in array is: " << max << endl;
	}
	void sort_descending() {
		for (int i = 0;i < size - 1;i++) {
			for (int j = i + 1;j < size;j++) {
				if (arr[i] < arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;

				}
			}

		}
		cout << "The sorted elements in descending order is : ";
		for (int i = 0;i < size;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}
	void sort_ascending() {
		for (int i = 0;i < size - 1;i++) {
			for (int j = i + 1;j < size;j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		cout << "The sorted elements in ascending order is : ";
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};
int main() {
	Array_elements a;
	a.getarray();
	a.max_element();
	a.sort_descending();
	a.sort_ascending();
	return 0;


}