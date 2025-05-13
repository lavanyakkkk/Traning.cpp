//pointers

#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 30;
	char ch = 'a';
	float f = 10.5;
	int* ptr1 = nullptr;
	
	

	printf("\naddress of a=%u and its value=%d\n", &a, a);
	printf("\naddress of a=%u and its value=%d\n", &ch,ch);
	printf("\naddress of a=%u and its value=%d\n", &f, f);
	printf("\naddress of a=%u and its value=%d\n", &ptr1, ptr1);

	a = 10;
	ptr1 = &a;
	printf("\naddress of a=%u and its value=%d\n", &ptr1, ptr1);
	printf("\nptr1 is pointing to =%u", ptr1);
	printf("/n%u is having a value stored as=%d\n", ptr1, *ptr1);

	ptr1 = &b;
	printf("\n%u is having a value stored as =%d/n", ptr1, *ptr1);

	//b=101;
	*ptr1 = 101;
	printf("/naddress of b=%u and its value=%d/n", &b, b);

	return 0;


}
