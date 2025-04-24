#include <iostream>
using namespace std;
int main()
{
	int num,position=1;
	int odd_position = 1, even_position = 1;
	cout << "enter num:" << endl;
	cin >> num;
	while (num>0)

	{
		num = num % 10;
		if (position % 2 == 0)
		{
			even_position *= num;
		}
		else
		{
			odd_position += num;
		}
		num = num / 10;
		position++;

	}
	if (odd_position == even_position) {
		cout << "The product and sum are equal" << endl;
	}
	else {
		cout << "They are not equal" << endl;

	}
	return 0;




	}
