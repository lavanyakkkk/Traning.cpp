//write a program of two maximum numbers using pointers

#include <iostream>
using namespace std;
int max_two_num(int*, int*);
int max_two_num(int* x, int* y) {
	/*int retValue = 0; with giving space for it
	if (*x < *y) {
		retValue = *y;
	}
	else {
		retValue = *x;
	}*/
	return((*x > *y) ? *x : *y);

}

int main() {
	int v1 = -20, v2 = -10;
	cout << max_two_num(&v1, &v2) << endl;
}