#include <iostream>
using namespace std;
int main() {
	int num, temp,  rem, rev=0;
	cout << "enter the number: " << endl;
	cin >> num;
	temp = num;
	while (temp)
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp /= 10;
	}
	if (num== rev) {
		cout << "the given number is palindrome" <<num << endl;
	}
	else{
		cout << "the given number is  not palindrome" << num << endl;
	
	}
}