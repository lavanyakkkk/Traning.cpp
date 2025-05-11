/*Write a Program to Calculate the Sum of Elements in an Array*/

#include <iostream>
using namespace std;
void sum_elements(int arr[], int num);
int main() {
	int num;
	cout << "enter the numbers: " << endl;
	cin >> num;
	int arr[100];
	for (int i = 0;i < num;i++) {
		cin >> arr[i];
	}
	sum_elements(arr, num);
	return 0;
}
void sum_elements(int arr[], int num)
{
	int sum = 0;
	for (int i = 0;i < num;i++) {
		sum += arr[i];
	}
	cout << "the sum of elements in array " << sum << endl;
}
