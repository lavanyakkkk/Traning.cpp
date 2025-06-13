/*Thread-safe Counter with Mutex
Problem: Create multiple threads that increment a shared counter 1000 times each. Use a mutex to protect the counter from race conditions.

Objective: Demonstrate data race and how to prevent it using std::mutex.
*/
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void incrementCounter() {
    for (int i = 0; i < 1000; i++) {
        lock_guard<mutex> lock(mtx);
        counter++;
    }
}

int main() {
    const int numThreads = 10;
    thread threads[numThreads];  
    for (int i = 0; i < numThreads; i++) {
        threads[i] = thread(incrementCounter);
    }

    for (int i = 0; i < numThreads; i++) {
        threads[i].join();
    }

    cout << "Final counter value: " << counter << endl;
    return 0;
}
