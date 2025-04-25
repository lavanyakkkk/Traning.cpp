#include <iostream>
using namespace std;
void fun(int); //bool fun(int)---another way using bool data type

int main()
{
	int n;
	cin >> n;
	fun(n);

}

void fun(int n)
{
	int i;
	int count = 0;
	if (n <= 1)
	{
		return 0;
	
	}
		
	for (i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			count++;
			cout << "its not a prime" << endl;
			break;
		}
	}
	if (count == 0)
	{
		cout << "its prime" << endl;

	

	}
}
