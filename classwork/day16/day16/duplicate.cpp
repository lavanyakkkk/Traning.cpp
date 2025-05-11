#include <iostream>
using namespace std;
int main() {
	int arr[50],n;
	cout << "enter the elements: " << endl;
	cin >> n;
	int i;
	for ( i = 0;i <= n;i++) {
		cin >> arr[i];
	}
	for ( i = 0;i <= n;i++) {
		cout << arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, k;
	for (i = 0;i <= n;i++) {
		for (j = i+1;j<n;){
			if (arr[i] == arr[j]) {
				for (k = j;k < n - 1;k++) {
					arr[k] = arr[k + 1];
				}
			}
			else {
				j++;
			}

		}
	}





}

