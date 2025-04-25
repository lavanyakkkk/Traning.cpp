
#include <iostream>
using namespace std;
int main()
{
	int  num,sum = 0, temporary_digit,res;
	cout << "enter a number:";
	cin >> num;
	 
	temporary_digit = num;

	while (temporary_digit > 0)
	{
		res = temporary_digit % 10;
		sum += res*res*res;
		temporary_digit /= 10;


	}
	if (sum == num)
		cout << num << "It's armstrong number" << endl;
	else
		cout << num << "It's not a armstrong number" << endl;
	return 0;
}