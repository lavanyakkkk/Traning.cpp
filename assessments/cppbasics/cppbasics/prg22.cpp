

#include <iostream>
using namespace std;
void small_large(int arr[], int num);  
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    small_large(arr, n);
    return 0;
}
void small_large(int arr[], int num) {
    int max = arr[0], min = arr[0];  
    for (int i = 1; i < num; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    cout << "The largest element in the array is: " << max << endl;
    cout << "The smallest element in the array is: " << min << endl;
}
