#include <iostream>
using namespace std;
int findSmallestDigit(int n) {
    int smallest = 10;  
    while (n > 0) {
        int digit = n % 10; 
        if (digit < smallest) {
            smallest = digit; 
        n = n / 10; 
    }

    return smallest;
}

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int smallest = findSmallestDigit(number);
    cout << "The smallest digit in the number is: " << smallest << endl;

    return 0;
}

