#include <iostream>
using  namespace std;
int main() {
	int num,count=0;
	cout << "Enter number:" << endl;
	cin >> num;
	while (num)
	{
		for (int i = 1;i < num;i++)
		{
			for (int j = i;j < num;j ++ )
			{
				if (isprime(i) && isprime(j))
				{
					if ((i + j) == num)
					{
						cout << i << "+" << j << "=" << num << endl;
						count++;
					}
				}

			}
		}
	}

}






/**/