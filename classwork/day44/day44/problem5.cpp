#include <iostream>
#include <thread>
using namespace std;
int turn = 0;
void A(int n) {
	for (int i = 0;i < n;i++) {
		while (turn != 0);
			cout << "A";
			turn=1;
		

	}
}
void B(int n) {
	for (int i = 0;i < n;i++) {
		while (turn != 1);
			cout << "B";
			turn=2;
		
	}
}

void C(int n) {
	for (int i = 0;i < n;i++) {
		while (turn != 2);
			cout << "C";
			turn = 0;
		
	}
}

int main() {
	int n = 5;
	thread t1(A,n);
	thread t2(B,n);
	thread t3(C,n);
	t1.join();
	t2.join();
	t3.join();
	return 0;

}