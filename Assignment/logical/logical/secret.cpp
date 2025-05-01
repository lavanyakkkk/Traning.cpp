#include <iostream>
using namespace std;
int firstNonZeroDigit(int n) {
    while (n != 0 && n % 10 == 0) {
        n = n / 10; 
    }
    while (n >= 10) {
        n = n / 10;  
    }
    return n;
}

int main() {
    int code;
    cout << "Enter the secret code: ";
    cin >> code;
    int firstDigit = firstNonZeroDigit(code);
    if (firstDigit % 2 == 0) {
        cout << "The first non-zero digit " << firstDigit << " is even." << endl;
    }
    else {
        cout << "The first non-zero digit " << firstDigit << " is odd." << endl;
    }

    return 0;
}
