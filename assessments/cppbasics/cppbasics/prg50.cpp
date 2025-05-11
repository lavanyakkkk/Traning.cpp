//Write a Program for Decimal to Hexadecimal Conversion

#include <iostream>
#include <string>
using namespace std;
char getHexDigit(int remainder) {
    if (remainder >= 0 && remainder <= 9) {
        return '0' + remainder; 
    }
    else {
        return 'A' + (remainder - 10);  
    }
}
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    if (decimal == 0) {
        cout << "Hexadecimal equivalent is: 0" << endl;
        return 0;
    }
    string hexadecimal = "";  
    while (decimal > 0) {
        int remainder = decimal % 16;  
        hexadecimal = getHexDigit(remainder) + hexadecimal; 
        decimal /= 16;  
    }
    cout << "Hexadecimal equivalent is: " << hexadecimal << endl;
    return 0;
}


