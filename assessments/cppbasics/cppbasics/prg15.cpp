/*Write a Program leap year or not*/

#include <iostream>
using namespace std;

void leap_year(int);

int main()
{
	int year;
	cout << "enter the year: " << endl;
	cin >> year;
	leap_year(year);
	return 0;
}

void leap_year(int year) {
	if (year%4==0 && year%100!=0 || year%400==0) {
		cout << "the given year is leap year " <<year<<endl;
	}
	else {
		cout << "the given year is not a leap year " <<year<< endl;
	}
}