#include <iostream>
#include  <sstream>
using namespace std;

void play() {
	string str = "123 4.56 lavanya";
	stringstream ss(str);

	
	int num;
	float a;
	string b;

	
	ss >> num;
	ss >> a;
	ss >> b;

	cout << "Integer: " << num << endl;
	cout << "character: " << b << endl;
	cout << "float: " << a << endl;
}

int main() {
	play();
	
}