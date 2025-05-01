#include <iostream>
using namespace std;
int main()
{
	int num,sum=0,originalNum;
	cout << "enter the number: " << endl;
	cin >> num;
	originalNum = num;
	while (num!=0)
	{
		int rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
	}
	cout << "The reversed number is: " << sum << endl;

	if (originalNum == sum)
	{
		cout << "the given number is palindrome" << endl;
	}
	else
	{
		cout << "The given number is not a palindrome" << endl;
	}
	return 0;
}