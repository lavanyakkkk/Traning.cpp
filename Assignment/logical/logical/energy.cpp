#include <iostream>
using namespace std;
int high(int n) {
    int power = 1;
    while (power * 2 <= n) {
        power *= 2;  
    }
    return power;  
}

int main() {
    int energy;
    cout << "Enter the energy reading: ";
    cin >> energy;
    int result = high(energy);
    cout << "The highest power of 2 less than or equal to " << energy << " is " << result << endl;

    return 0;
}
