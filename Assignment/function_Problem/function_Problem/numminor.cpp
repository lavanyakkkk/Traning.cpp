#include <iostream>
using namespace std;
void Mirror(int n) {
    
    if (n == 0) {
        return;
    }
    cout << n % 10 << " ";

    Mirror(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Mirror(num);

    return 0;
}
