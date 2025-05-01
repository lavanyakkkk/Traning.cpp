#include <iostream>
using namespace std;
int func(int a, int b) {
	return a + b;
}

int main() {
	int num1, num2;
	cout << "enter two numbers: " << endl;
	cin >> num1 >> num2;
	int res = func(num1, num2);
	if (res % 2 == 0) 
	{
		cout << "The given number is even " << res << endl;
	     
	}
		
	return 0;
}