//Write a program in C++ to check whether the primitive values crossing the limits or not.

#include <iostream>
#include <climits>  
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > INT_MAX) {
        cout << "The number exceeds the maximum limit for int: " << INT_MAX << endl;
    }
    else if (num < INT_MIN) {
        cout << "The number is less than the minimum limit for int: " << INT_MIN << endl;
    }
    else {
        cout << "The number is within the limits of int." << endl;
    }
    return 0;
}
