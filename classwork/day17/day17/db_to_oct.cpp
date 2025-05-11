#include <iostream>
using namespace std;
int main() {
	int n, sum = 0, rem,place=1;
	cout << "enter the number: " << endl;
	cin >> n;
	int origin = n;
	while (n > 0) {
		rem = n % 8;
		sum += rem * place;
		place *= 10;
		n /= 8;

	}
	cout << "octal equivalent of" << n << "is:" << sum << endl;
	return 0;

}