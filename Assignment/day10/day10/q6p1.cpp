/*
Find Power Using Only Multiplication
Problem:
Write a function to compute a^b using only multiplication, no pow() or loops.

Hint:
Use recursion:
a^b = a * a^(b-1)
Base case: b == 0 → return 1.
*/

#include  <iostream>
using namespace std;
int mult(int a, int b)
{
	if (b == 0)

		return 1;
	else

		return a * mult(a , b - 1);

	
}
	int main() 
	{
		int num1, num2;
		cout << "enter number:";
		cin >> num1 >> num2;
		int res = mult(num1, num2);
		cout << num1 << "raised to power " << num2 << " is:" << res << endl;

		return 0;


	}
		
	


}