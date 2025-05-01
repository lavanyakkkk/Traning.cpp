#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "enter number: ";
	cin >> a >> b >> c;
	int s = a + b + c;
	if (s == 180) {
		cout << "the given numbers are triangle" << s << endl;
	}
	else {
		cout << "the given numbers are not a triangle " << s << endl;
	}
	return 0;
}