//write the sum of arrays using pointers

#include <iostream>
using namespace std;
int add_arrays(int *, int);
int add_arrays(int* ptr, int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
		sum += ptr[i];
	return sum;
}
int main() {
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << add_arrays(&list[0], cap) << endl;
	return 0;
}

//what is pointer notation,array notation