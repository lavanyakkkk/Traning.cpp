#include <iostream>
using namespace std;

int main() {
	/*
	//char name[20] = "Bhima";//here compiler automatcially add the null character 
	char name[20] = { 'b','h','i','m','a' };//here we give like character so that we explicityly add null charcter
	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", name[i], name[i]);
	for (int i = 39, count = 0;i < 58;i++) 
		name[count++] = i;
	cout << "==============" << endl;
	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", num[i], num[i]);

	*/

	char name[20] = { '\0', };
	cout < strlen(name) <<endl;



	return 0;
}