#include <iostream>
using namespace std;
int countOnesInBinary(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {  
            count++;        
        }
        n = n / 2;  
    }
    return count;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    int onesCount = countOnesInBinary(number);

    cout << "The number of 1s in the binary representation is: " << onesCount << endl;

    return 0;
}
