/*
Problem 1: Print Numbers from N to 1
Problem Statement:
Write a recursive function to print numbers from N down to 1.


*/
#include <iostream>
using namespace std;

int func(int num) {
    if (num <=0) {
        
        return num;

    }
    else {
        cout << "current num: " << num << endl;
        return func(num - 1);
    }
}

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;
    func(num);
    return 0;

}
