#include <iostream>
using namespace std;
void halve(int n) {
    
    if (n <= 0) {
        return;
    }
    cout << n << " ";
    halve(n / 2);
}

int main() {
    int energy;
    cout << "Enter the energy: ";
    cin >> energy;
    
    halve(energy);

    return 0;
}
