#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "enter the number: " << endl;
	cin >> n;
	int i, j;
	int k=2*n-2;
	for ( i = 0;i <= n;i++) {
			for ( j = 0;j <=k;j++) {
				cout << " ";
			}
			//k = k - 1;
			k--;
			for (int j = 0;j <= i;j++) {
				cout << "*";
			}
		
			cout << endl;
		
	}
	return 0;
}