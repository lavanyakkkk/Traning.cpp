#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int total_sum = 0;
    int left_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += arr[i];
    }
    for (int i = 0; i < n; ++i) {
        
        total_sum -= arr[i];
        if (left_sum == total_sum) {
            return i;  
        }
        left_sum += arr[i];
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;  
    int arr[100];  
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << findEquilibriumIndex(arr, n) << endl;

    return 0;
}

