#include <iostream>
using namespace std;

int secondLastDigit(int n) {
    // Remove the last digit by dividing by 10, then get the last digit of the result
    return (n / 10) % 10;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 10) {
        cout << "The number is too small to have a second last digit." << endl;
    }
    else {
        
        cout << "The second last digit of " << num << " is: " << secondLastDigit(num) << endl;
    }

    return 0;
}
