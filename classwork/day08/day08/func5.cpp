#include <iostream>
using namespace std;
int main()
{
	int num,product = 1;
	cout << "enter num:" << endl;
	cin >> num;
	while (num != 0)
	{
		for (int i = 1;i <= num;i ++ )
		{
			 product = product * i;

		}
		cout << "product:" << product << endl;
	}
}