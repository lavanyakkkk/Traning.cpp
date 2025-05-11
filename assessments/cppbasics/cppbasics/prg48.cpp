//Write a Program for Decimal to Binary Conversion
#include <iostream>
#include <string>
using namespace std;
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    if (decimal == 0) {
        cout << "Binary equivalent is: 0" << endl;
        return 0;
    }
    string binary = "";
    while (decimal > 0) {
        int remainder = decimal % 2;   
        binary = to_string(remainder) + binary;  
        decimal /= 2;
    }
    cout << "Binary equivalent is: " << binary << endl;
    return 0;
}
