#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double amt, principal, compound_interest, rate = 2, time = 1;
	
	cout << "enter principle: ";
	cin >> principal;
	
    amt = (principal * pow((1 + rate / 100),time));
    compound_interest = amt - principal;
	cout << "the compound interest is :" << compound_interest << endl;

	return 0;







}