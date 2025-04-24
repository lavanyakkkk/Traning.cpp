#include <iostream>
using namespace std;
int main()
{
	int n,r, sum = 0, product = 1;
	cout << "Enter the number:" << endl;
	cin >> n;
	while (n)
	{
		r = n % 10;
		sum += r;
		if (n != 0)
		{
			product *= r;
		}
		n = n / 10;
	}
	cout << "The sum is:" << sum << endl;
	cout << "The product is: " << product << endl;
	return 0;
}
