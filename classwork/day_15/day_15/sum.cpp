#include <iostream>
using namespace std;
int main() {
	int num,sum=0;
	cout << "enter number: " << endl;
	cin >> num;
	for (int i = 1; i <= num;i++) 
	{
		sum += i;
	}
	cout << "the sum of n natural number is : " << sum << endl;
	return 0;
}