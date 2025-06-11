//Sum of Numbers:
//:Write a function that takes a string of space - separated numbers(e.g. "10, 20 ,30, 40") and prints the sum.

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

void add() {
	string str = "10,20,30,40";
	int n;
    replace(str.begin(), str.end(), ',', ' ');
    stringstream ss(str);
    int num;
    int sum = 0;
    while (ss >> num) {
        sum += num;
    }

    cout << "the addition of two number is: " << sum << endl;

	

}

int main() {
	add();

	return 0;
}