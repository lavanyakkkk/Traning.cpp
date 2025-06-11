//Parse a string "Math,Science,History" (comma-separated) and print each subject on a new line.
#include <iostream>
#include <sstream>
using namespace std;

void parser() {
	string str = "Math,Science,History";
	stringstream ss(str);

	string a;

	cout << "parser in new line" << endl;
	while (getline(ss, a, ',')) {
		cout << a << endl;
	}
}

int main() {
	parser();
}
