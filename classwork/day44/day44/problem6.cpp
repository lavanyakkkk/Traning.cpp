/*
#include <iostream>
#include <thread>
using namespace std;
void num(int n) {
	for (int i = 1;i <= n;i++) {
		if (i % 2 == 0) {
			cout << "even numbers are: " << i << endl;
		}
	}
}

void oddNum(int n) {
	for (int i = 1;i <= n;i++) {
		if (i % 2 != 0) {
			cout << "odd numbers are : " << i << endl;
		}
	}
}

int main() {
	int n = 20;
	thread t1(num,n);
	thread t2(oddNum,n);
	t1.join();
	t2.join();
	return 0;
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

mutex mtx;
condition_variable cv;
int current = 1;
const int N = 20;

void printOdd() {
    while (current <= N) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return current % 2 != 0; });  // Wait until it's odd's turn
        if (current > N) break;  // Check after waking up to prevent extra prints
        cout << current << " ";
        current++;
        cv.notify_all();  // Wake up the other thread
    }
}

void printEven() {
    while (current <= N) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return current % 2 == 0; });  // Wait until it's even's turn
        if (current > N) break;  // Check after waking up to prevent extra prints
        cout << current << " ";
        current++;
        cv.notify_all();  // Wake up the other thread
    }
}

int main() {
    thread t1(printOdd);
    thread t2(printEven);

    t1.join();
    t2.join();

    cout << endl;  // Neat output

    return 0;
}
