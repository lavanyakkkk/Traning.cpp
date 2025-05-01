#include <iostream>
using namespace std;

int digit(int n) {
    
    if (n < 10)
        return n;

    int sum = 0;
     while (n > 0) {
        sum += n % 10;  
        n /= 10;         
    }
    
    return digit(sum);
}

int main() {
    int num;
    cout << "Enter num: " << endl;
    cin >> num;
    cout << "Single digit is: " << digit(num) << endl;

    return 0;
}
