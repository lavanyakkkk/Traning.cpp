/*
equilibrium
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int a[1000];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    int left = 0;
    for (int i = 0; i < n; i++) {
        int right = sum - left - a[i];

        if (left == right) {
            cout << "index is: " << i << endl;
            return 0;
        }

        left += a[i];
    }

    cout << -1 << endl;
    return 0;
}













