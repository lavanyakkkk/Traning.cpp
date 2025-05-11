#include <iostream>
using namespace std;
int conv2Dec(int, int);
int main() {
	cout << conv2Dec(5, 2);
	return 0;
}
int conv2Dec(int num, int base)
{
	int r,sum=0;
	int place = 0;
	while (num) {
		r = num % base;
		sum += r * pow(10, place);
			place++;
			return 0;
	}
}