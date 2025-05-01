#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of presses: ";
    cin >> n;

    int cur_num = 1;  
    int sum = 0;  
    for (int i = 0; i < n; ++i) {
        sum += cur_num;  
        cur_num *= 2;  
    }
    cout << "The sum of all numbers is: " << sum << endl;

    return 0;
}
