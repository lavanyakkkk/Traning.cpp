#include <iostream>
using namespace std;
int sumOdd(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  
        if (digit % 2 != 0) {
            sum += digit;  
        }

        n = n / 10;  
    }

    return sum;
}

int main() {
    int coinNumber;
    cout << "Enter the total coin collection number: ";
    cin >> coinNumber;
    int sum = sumOdd(coinNumber);
    cout << "The sum of the odd digits is: " << sum << endl;

    return 0;
}
