#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 101,202,333 }; //declaration with initialization of array
	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;//at execution it depends on index value
	cout << "arr[2] = " << arr[2] << endl;
	//cout << "arr[3] = " << arr[3] << endl;//it will shows the garbage value when it is not declare in array


	for (int iv = 0;iv <=3 - 1;iv++)
		cout << "arr[" << iv << "]= " << arr[iv] << endl;

	arr[0] == 456;
	arr[1] = arr[0] * 10;

	for (int iv = 0;iv <= 3 - 1;iv++)
		cout << "arr[" << iv << "]= " << arr[iv] << endl;


	return 0;

}


