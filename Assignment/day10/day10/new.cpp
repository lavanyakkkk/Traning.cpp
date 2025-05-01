#include <iostream>
using namespace std;
int main() {
	int firstnum, secondnum;
	cout << "enter first number: " << endl;
	cin >> firstnum;
	cout << "enter second number: " << endl;
	cin >> secondnum;
	int last_digit = firstnum % 10;
	int first_digit;
	while (secondnum >=10)
	{
		secondnum = secondnum / 10;

	}
	first_digit = secondnum;
	int new_num = last_digit * 10 + first_digit;
	cout << "the new number is: " << new_num << endl;
	return 0;

	

}

