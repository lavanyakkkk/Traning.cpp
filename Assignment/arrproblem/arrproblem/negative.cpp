#include <iostream>
using namespace std;
void findSubarrayWithSum(int arr[], int n, int target_sum) {
    int current_sum = 0;
    int start = 0;
    for (int end = 0; end < n; ++end) {
        current_sum += arr[end]
        while (current_sum > target_sum && start < end) {
            current_sum -= arr[start];
            start++;
        }
        
        if (current_sum == target_sum) {
            cout << "Sum found between indexes " << start << " and " << end << endl;
            return;
        }
    }
    cout << "No subarray found" << endl;
}

int main() {
    int n;
    cin >> n;  
    int arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum;
    cin >> sum;  
    findSubarrayWithSum(arr, n, sum);

    return 0;
}
