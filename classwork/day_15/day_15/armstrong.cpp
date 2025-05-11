
#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    if (num < 0) {
        num = abs(num);
    }
    if (num == 0) {
        return true;
    }
    
    int original_Number = num, sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, num);
        num /= 10;
    }
    return sum == original_Number;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    }
    else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}