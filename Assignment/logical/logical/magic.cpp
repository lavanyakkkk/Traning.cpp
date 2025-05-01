#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; ++i) {  
        if (n % i == 0) {
            return false;  
        }
    }
    return true; 
}
int multiplyDigits(int n) {
    int product = 1;

    while (n > 0) {
        int digit = n % 10;  
        product *= digit;    
        n /= 10;             
    }

    return product;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int product = multiplyDigits(number);
    if (isPrime(product)) {
        cout << "Box Opens" << endl;
    }
    else {
        cout << "Box Stays Closed" << endl;
    }

    return 0;
}
