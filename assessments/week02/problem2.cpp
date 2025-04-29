#include <iostream>
using namespace std;

int main() {
    long long number;

    cout << "Enter a number: ";
    cin >> number;

    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    while (number != 0) {
        int digit = number % 10;  
        switch (digit) {
        case 0: count0++; break;
        case 1: count1++; break;
        case 2: count2++; break;
        case 3: count3++; break;
        case 4: count4++; break;
        case 5: count5++; break;
        case 6: count6++; break;
        case 7: count7++; break;
        case 8: count8++; break;
        case 9: count9++; break;
        }
        number /= 10;  
    }

    cout << "Digit frequencies:\n";
    cout << "0: " << count0 << endl;
    cout << "1: " << count1 << endl;
    cout << "2: " << count2 << endl;
    cout << "3: " << count3 << endl;
    cout << "4: " << count4 << endl;
    cout << "5: " << count5 << endl;
    cout << "6: " << count6 << endl;
    cout << "7: " << count7 << endl;
    cout << "8: " << count8 << endl;
    cout << "9: " << count9 << endl;

    return 0;
}
