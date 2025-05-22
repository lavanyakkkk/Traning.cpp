#include <iostream>
using namespace std;
int add(int, int);
int add(int, int, int);
char* add(char*, char*);
int add(int v1, int v2 = 0) {
	return v1 + v2;
}
int main() {
	char s1[100] = "lavanya";
	char s2[] = "kumaran";
	cout << add(10) << endl;
	cout << add(s1, s2) << endl;

}