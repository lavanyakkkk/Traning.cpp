#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "enter a: " << endl;
	cin >> a;
	cout << "enter b: " << endl;
	cin >> b;
	cout << "enter c: " << endl;
	cin >> c;
	if ((a > b && a > c) || (a < b && a < c)) {
		cout << "the middle num is a" <<a<< endl;
	}
	else if ((b > a && b > c) || (b < a && b < c)) {
		cout << "the middle num is b" <<b<<endl;
	}
	else {
		cout << "the middle num is c" <<c<< endl;
	}
	return 0;

}