/*
functions of different type:calling of functions
1.call by value
2.call by pointers
3.call by references
*/

#include <iostream>
using namespace std;
int updateAdd(int, int);
int main() 
{
	int a = 10,b = 20;
	int res = add(a, b);
	cout << res << endl;
	return 0;
}

int add(int v1, int v2)
{
	return v1 + v2;

}
int updateAdd(int v1, int v2)
{
	v1 *= 2;
	v2 /= 3;
	return v1 + v2;
}

