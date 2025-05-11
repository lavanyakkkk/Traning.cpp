//Write a Program for Decimal to Octal Conversion

#include <iostream>
#include <string>
using namespace std;
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    if (decimal == 0) {
        cout << "Octal equivalent is: 0" << endl;
        return 0;
    }
    string octal = "";  
    while (decimal > 0) {
        int remainder = decimal % 8;   
        octal = to_string(remainder) + octal;  
        decimal /= 8;  
    }
    cout << "Octal equivalent is: " << octal << endl;
    return 0;
}

