//Write a program in C++ that converts kilometers per hour to miles per hour.

#include <iostream>
using namespace std;
int main() {
    float kmph, mph;
    cout << "Enter speed in kilometers per hour: ";
    cin >> kmph;
    mph = kmph / 1.60934;
    cout << "Speed in miles per hour: " << mph << " mph" << endl;
    return 0;
}
