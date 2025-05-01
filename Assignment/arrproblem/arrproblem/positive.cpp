#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    int arr[n]; 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }
    int max_from_right = arr[n - 1]; 
    cout << max_from_right << " ";  
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= max_from_right) {
            cout << arr[i] << " ";  
            max_from_right = arr[i]; 
        }
    }
    cout << endl; 
    return 0;
}
