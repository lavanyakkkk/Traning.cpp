#include <iostream>
using namespace std;
template<class T1, class T2>
class Calculator
{
private:
	T1 num1;
	T2 num2;
public:
	Calculator(T1 value1,T2 value2):num1 (value1),num2 (value2){}
	void printadd()
	{
		cout << "the addition is: " << (num1 + num2) <<  endl;
	}
	void printsub() {
		cout << "the subtraction is: " << (num1 - num2) << endl;
	}
	void printMulti() {
		cout << "the multoiplication is: " << (num1 * num2) << endl;
	}
	void printdivision() {
		cout << "the division is: " << (num1 / num2) << endl;
	}
	void printcalci() {
		cout << "num1: " << num1 << "num2: " << num2 << endl;
	}
};

int main() {
	
	Calculator<int, int>intCalculator(40, 20);

	intCalculator.printcalci();
	intCalculator.printadd();
	intCalculator.printsub();
	intCalculator.printMulti();
	intCalculator.printdivision();

	return 0;


}
