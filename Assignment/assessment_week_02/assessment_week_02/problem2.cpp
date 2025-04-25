#include <iostream>
using namespace std;
int main()
{
	int count = 0,num;
	cout << "enter num:";
	cin >> num;
	while (num != 0) {
		num = num % 10;
		num++;
		num /= 10;
	}
	for (int i = 0;i < 10;i++)
	{
		count = count + num;
		if (count == 0)
		{
			cout << count << endl;
		}
		else
		{
			cout << "the given number is not printing " << endl;
		}

	}

		



	


}