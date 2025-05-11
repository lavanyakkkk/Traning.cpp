/*Write a Program to Find the Second Smallest Element in an Array*/

#include <iostream>
using namespace std;
void second_small(int arr[], int num);
int main() {
	int num;
	cout << "enter the elements: " << endl;
	cin >> num;
	int arr[100];
	cout << "enter the array elements: " << endl;
	for (int i = 0;i < num;i++) {
		cin >> arr[i];
	}
	second_small(arr, num);
	return 0;
}

void second_small(int arr[], int num)
{
	int first_min = INT_MAX,second_min = INT_MAX;
	for (int i = 0;i < num;i++) {
		if (arr[i] < first_min) {
			second_min = first_min;
			first_min = arr[i];
		}
		else if (arr[i] < second_min && arr[i] != first_min) 
		{
			second_min = arr[i];
		}

		
	}
	if (second_min == INT_MAX) {
		cout << "there is no second minimum" << endl;
	}
	else {
		cout << "the second minimum of element in array is: " << second_min << endl;
		
	}

	
}