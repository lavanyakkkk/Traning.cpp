#include <iostream>
using namespace std;

void summon_Dragon(int n) {
    
    for (int i = 1; i <= n; ++i) {
        
        if (i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    summon_Dragon(n);
    return 0;
}
