/*
* Count Number of Even and Odd Digits in a Number
Input a number, count how many digits are even and how many are odd.


*/



#include <iostream>
using namespace std;
int main()
{
	int num,count_even=0,count_odd=0;
	cout << "enter num: " << endl;
	cin >> num;
	cout << "print all counted even and odd numbers" << endl;
	for (int i = 1;i <= num;i++) {
		if (i % 2 == 0) {
			cout << "the even number is:" << i<<endl;
			count_even += 1;

		}
		else
		{
			cout << "the odd number is: " << i<<endl;
			count_odd += 1;
		}
		cout << "\n Total even numbers is: " << count_even << endl;
		cout << "\n Total odd numbers is: " << count_odd << endl;
	}

	return 0;
}