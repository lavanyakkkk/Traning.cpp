#include <iostream>
using namespace std;

// Function to swap two numbers using pass-by-reference
void swap(int& a, int& b) {
    // Swap using arithmetic operations
    a = a + b;  // Step 1: a becomes the sum of a and b
    b = a - b;  // Step 2: b becomes the original value of a
    a = a - b;  // Step 3: a becomes the original value of b
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    swap(num1, num2);
    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
