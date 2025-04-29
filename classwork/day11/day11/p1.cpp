#include <iostream>
using namespace std;
int main()
{
	int arr[3];
	cout << "Cap/Size of arr=" << sizeof(arr) << endl; //size of arr
	cout << "Address of arr[0]=" << &arr[0] << endl; //address of arr
	cout << "Address of arr[1]=" << &arr[1] << endl;
	cout << "Address of arr[2]=" << &arr[2] << endl;
	
	printf("Address of arr[0]=%u\n", &arr[0]);
	printf("Address of arr[1]=%u\n", &arr[1]);//memory
	printf("Address of arr[2]=%u\n", &arr[1]);

	return 0;

}