//#include <iostream>
#include <stdio.h>

//using namespace std;

int main()
{
	//printf("\nHello World\n");

	int a = 10;
	float b = 15.5;
	char c = 'A';
	double d = 101.111;
	
	printf("\n %c \n %d \n %f \n %lf \n %s\n", c, a, b, d, "lavanya"); //when we comes into string it automatically runs

	scanf("%c%ch%f%lf%s", &c, &a, &b, &d, s); 
	//while using scanf we should not having space inbetween

	printf("\n %c \n %d \n %f \n %lf \n %s\n", c, a, b, d, s);

	return 0;
}
/*scanf("%c%ch%f%lf%s", &c, &a, &b, &d, s);
fflush(stdin)
overcoming this we have to do
scanf(" "); it idle capture the character--it stores in temporary 


printf("\n %c \n %05d \n %f \n %lf \n %s\n", c, a, b, d, s);


*/