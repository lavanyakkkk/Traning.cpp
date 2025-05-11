/*Write a Program to Find the Greatest of the Three Numbers*/
#include <iostream>
using namespace std;
void greatest_num(int , int , int ); //function prototype

int main()
{
	int num1, num2, num3;
	cout << "enter the three numbers: " << endl;
	cin >> num1>> num2>> num3;
	greatest_num(num1, num2, num3);
	return 0;
}

void greatest_num(int num1,int num2,int num3) 
{
	if ((num1>num2) && (num1>num3)) {
		cout << "number one is greatest of all" << endl;
	}
	else if ((num2 > num1) && (num2 > num3)) {
		cout << "number two is greatest of all" << endl;

	}
	else {
		cout << "number three is greatest of all" << endl;
	}
}
