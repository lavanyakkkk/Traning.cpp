/*. Print Characters Alternately (Ping Pong)
Problem: Create two threads. One prints "Ping" and the other prints "Pong" alternately 10 times. Ensure the output is in the correct alternating sequence.

Objective: Understand thread synchronization using condition variables or atomic flags.
*/
#include <iostream>
#include <thread>

using namespace std;

 bool pingTurn = true;  

void printPing(int n) {
    for (int i = 0; i < n; i++) {
        while (!pingTurn); 
        cout << "Ping" << endl;
        pingTurn = false;
    }
}

void printPong(int n) {
    for (int i = 0; i < n; i++) {
        while (pingTurn); 
        cout << "Pong" << endl;
        pingTurn = true;
    }
}

int main() {
    int count = 10;
    thread t1(printPing, count);
    thread t2(printPong, count);

    t1.join();
    t2.join();

    return 0;
}

