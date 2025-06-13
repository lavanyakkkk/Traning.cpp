/*2. Print Odd and Even Numbers Using Same Function
Problem: Write a program using two threads running the same function to print odd and even numbers from 1 to N. Use a flag to distinguish between threads.

Objective: Learn how to pass arguments to threads and reuse the same function logic with different behavior.*/


#include <iostream>
#include <thread>
using namespace std;
void DisplayNum(int n, bool isEve) {
	for (int i = 1;i <= n;i++) {
		
		if (isEve && i % 2 == 0) {
			cout<<"even numbers are: "<< i << endl;

		}
		else if (!isEve && i % 2 != 0) {
			cout <<"odd numbers are: "<< i << endl;
		}
	}
}

int main() {
	int n = 20;
	thread oddNum(DisplayNum, n, false);
	thread evenNum(DisplayNum, n, true);
	oddNum.join();
	evenNum.join();
	return 0;

}