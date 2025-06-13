#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>
using namespace std;
mutex m1;
mutex m2;
void thread1() {
	lock(m1, m2);
	lock_guard<mutex>lock1(m1,adopt_lock);
	this_thread::sleep_for(chrono::milliseconds(3));
	lock_guard<mutex>lock2(m2,adopt_lock);
	cout << "thread 1 got finsihed" << endl;
}

void thread2() {
	lock(m1, m2);
	lock_guard<mutex>lock1(m1,adopt_lock);
	this_thread::sleep_for(chrono::milliseconds(3));
	lock_guard<mutex>lock2(m2,adopt_lock);
	cout << "thread 2 got finished " << endl;
}

int main() {
	thread t1(thread1);
	thread t2(thread2);
	t1.join();
	t2.join();
	return 0;
}