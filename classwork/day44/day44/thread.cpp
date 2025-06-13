#include <iostream>
#include <thread>
using namespace std;
void hello() {
	cout << "hello from world"<< endl;

}

int main() {
	thread t(hello);
	t.join();
	cout << "end of the program" << endl;
	//t.join(); cout after join
	
	return 0;
}

/*
When you put cout << "end of program" after t.join(), the main thread waits for hello() to finish before printing.

The order of output is always consistent.*/

/*When you put cout << "end of program" before t.join(), both main thread and hello() thread can run at the same time.

The order of output depends on the CPU scheduler.*/