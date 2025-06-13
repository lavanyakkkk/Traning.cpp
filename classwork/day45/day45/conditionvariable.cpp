#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <chrono>
using namespace std;
mutex mtx;
condition_variable v;
bool data_ready = false;
void producer() {
	lock_guard<mutex>lock(mtx);
	this_thread::sleep_for(chrono::milliseconds(10));
	data_ready = true;
	cout << "it got produced" << endl;
	v.notify_one();

}
void consumer() {
	unique_lock<mutex>lock(mtx);
	v.wait(lock, [] {return data_ready;});
	cout << "data got consumed" << endl;

}

int main() {
	thread producerthread(producer);
	thread consumerthread(consumer);

	producerthread.join();
	consumerthread.join();

	return 0;

	
}
