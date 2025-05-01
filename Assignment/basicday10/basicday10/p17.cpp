#include <iostream>
using namespace std;
int main()
{
	int num, first_term = 0, second_term = 1, next_term;

	cout << "enter number: " << endl;
	cin >> num;
	for (int i = 1;i <= num;i++)
	{
		
		cout << first_term << " ";
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;

	}
	cout << endl;
	return 0;
}