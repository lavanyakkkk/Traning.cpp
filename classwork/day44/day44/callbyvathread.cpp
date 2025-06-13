#include <iostream>
#include <thread>
#include <functional> 

using namespace std;
void callByValue(int x) {
    x += 10;
    cout << "Inside callByValue: x = " <<" " << x << endl;
}
void callByReference(int& x) {
    x += 10;
    cout << "Inside callByReference: x = " <<" "<< x << endl;
}

int main() {
    int a = 5;
    int b = 5;
    thread t1(callByValue, a);
    
    t1.join();
    thread t2(callByReference, ref(b));

    t2.join();
    
    cout << "After threads:" << endl;
    cout << "a (original variable passed by value) = " << a << endl;
    cout << "b (original variable passed by reference) = " << b << endl;

    return 0;
}

//we need a separate pc for eah of these stack

