
//in synchronization -> certain part of code is get locked and then release it
/*1?. A thread locks the critical section using a mutex (or other synchronization primitive).
2?. While the section is locked, no other thread can enter.
3?. When the thread finishes, it unlocks the critical section, allowing other threads to enter.

*/
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

int counter = 0; 
mutex mtx; 

void incrementCounter(int numIncrements) {
    for (int i = 0; i < numIncrements; ++i) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

int main() {
    const int numThreads = 5;
    const int numIncrements = 100000;

    vector<thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(incrementCounter, numIncrements);
    }

    for (auto& t : threads) {
        t.join();
    }

    cout << "Final counter value (with synchronization) = " << counter << endl;

    return 0;
}
