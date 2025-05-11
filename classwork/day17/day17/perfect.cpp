#include <iostream>
using namespace std;
int main() {
	int n,sum=0;
	cout << "enter number: " << endl;
	cin >> n;
	for (int i = 0;i < n;i++) {
		if (n % i == 0) {
			sum += i;
		}
		cout << "the perfect of sum is: " << sum << endl;
	}
		
	return 0;

	
}