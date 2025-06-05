#include <iostream>
using namespace std;
constexpr int func(int x, int y) {
	return x + y;
}

int main() {
	int sum =func(10,20);
	cout << sum << endl;
	return 0;
}