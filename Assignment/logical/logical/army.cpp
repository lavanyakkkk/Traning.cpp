#include <iostream>
using namespace std;
bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i; 
        }
    }
    return sum == n;
}

int main() {
    int armyNumber;
    cout << "Enter the army number: ";
    cin >> armyNumber;
    if (isPerfectNumber(armyNumber)) {
        cout << "The army number " << armyNumber << " is a perfect army!" << endl;
    }
    else {
        cout << "The army number " << armyNumber << " is not a perfect army." << endl;
    }

    return 0;
}

