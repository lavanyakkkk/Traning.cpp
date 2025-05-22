#include <iostream>
using namespace std;
void display(char[]);
int main() {
	char s[] = "lavanya";
	display(s);
	return 0;
}
void display(const char name[]) {
	while (*name != '\0') {
		cout << *name++;
		cout << endl;
	}
}