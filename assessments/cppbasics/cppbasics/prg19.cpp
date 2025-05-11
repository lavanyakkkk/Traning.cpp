/*Write a Program to Find the Nth Term of the Fibonacci Series
*/

#include <iostream>
using namespace std;
void fibonacci_term(int);
int main() {
	int num,res;
	cout << "enter the num: " << endl;
	cin >> num;
	fibonacci_term(num);
	return 0;
}
void fibonacci_term(int num)
{
	int first_num = 0;
	int second_num = 1;
	for (int i = 2;i <= num;i++) {
		int res = first_num + second_num;
		first_num = second_num;
		second_num = res;
		cout << "the fibonacci series of the given number is : " << res << endl;

	}
	

}