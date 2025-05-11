/*Write a Program to Count the Sum of Numbers in a String*/


#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cout << "enter string: " << endl;
	cin >> str;
	int n = 0, sum = 0;
	for (int i = 0;i < str.length();i++) {
		if (isdigit(str[i])) {
			n = n * 10 + (str[i] - '0');
		}
		else {
			sum += n;
			n = 0;
		}
	}
	sum += n;
	cout << "sum of numbers: " << sum << endl;
	return 0;

}
