/*Write a Program to Find the Sum of the First N Natural Numbers*/

#include <iostream>
using namespace std;

void sum_natural(int );

int main() 
{
	int num;
	cout << "enter the num: " << endl;
	cin >> num;
	sum_natural(num);
	return 0;
}

void sum_natural(int num)
{
	int sum = 0;
	for (int i = 1;i <= num;i++) {
		sum += i;
	}
	cout << "the sum of natural number is: " << sum << endl;

 
}
