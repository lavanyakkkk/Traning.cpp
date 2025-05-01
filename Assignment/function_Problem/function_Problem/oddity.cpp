#include <iostream>
using namespace std;
void visitOddFloors(int currentFloor, int n) {
   
    if (currentFloor > n) {
        return;
    }

    cout << currentFloor << " ";

    visitOddFloors(currentFloor + 2, n);
}

int main() {
    int n;
    cout << "Enter the number of floors: ";
    cin >> n;
    visitOddFloors(1, n);

    return 0;
}
