#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr1[50];  

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << ' ';
    }
    cout << endl;

    int smallest = arr1[0], largest = arr1[0];

    
    for (int i = 1; i < n; i++) {
        if (arr1[i] < smallest) {
            smallest = arr1[i];
        }
        if (arr1[i] > largest) {
            largest = arr1[i];
        }
    }

    cout << "The smallest element in the array: " << smallest << endl;
    cout << "The largest element in the array: " << largest << endl;

    return 0;
}
