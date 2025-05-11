//Write a Program to Check Whether a Number is an Armstrong Number or Not
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int num, originalNum, r, power = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    while (num != 0) {
        num /= 10;  
        power++;  
    }

    num = originalNum;
    while (num != 0) {
        r = num % 10;  
        sum += pow(r, power);  
        num /= 10;  
    }
    if (sum == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    }
    else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}

