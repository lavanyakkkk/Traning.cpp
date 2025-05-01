#include <iostream>
using namespace std;
void findRing(int hour) {
    
    for (int minute = 1; minute <= 60; ++minute) {
       
        if (hour % minute == 0) {
            cout << minute << " ";
        }
    }
    cout << endl; 
}

int main() {
    int hour;

    cout << "Enter the hour value: ";
    cin >> hour;
    cout << "The clock will ring at the following minutes: ";
    findRing(hour);

    return 0;
}
