/*C++ Program To Check Whether Number is Even Or Odd*/

#include <iostream>
using namespace std;

void check_even_odd(int num);

int main() {
	int num_1;
	cout << "enter the number: " << endl;
	cin >> num_1;
	check_even_odd(num_1);
	return 0;
}

void check_even_odd(int num)
{
	if (num % 2 == 0) {
		cout << "the given number is even" << endl;

	}
	else {
		cout << "the given number is odd" << endl;
	}
}