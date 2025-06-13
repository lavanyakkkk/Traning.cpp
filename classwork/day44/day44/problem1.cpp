/*1. Print Numbers Using Two Threads
Problem: Create two threads. One thread prints numbers from 1 to 10, and the other thread prints numbers from 11 to 20. Use std::thread to demonstrate concurrent execution.

Objective: Understand basic thread creation and joining.*/

#include <iostream>
#include <thread>
using namespace std;
void startNum() {
	for (int i = 1;i <= 10;i++) {
		cout << i << endl;
	}
}
void anotherNum() {
	for (int j = 11;j <= 20;j++) {
		cout << j << endl;
	}
}
int main() {
	thread t1(startNum);
	thread t2(anotherNum);
	t1.join();
	t2.join();
	return 0;


}
