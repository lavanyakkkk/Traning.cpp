#include <iostream>
using namespace std;
int sumOfSquares(int n) {
    if (n == 0) {
        return 0;
    }
    return n * n + sumOfSquares(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares from 1 to " << n << " is: " << sumOfSquares(n) << endl;
    return 0;
}
