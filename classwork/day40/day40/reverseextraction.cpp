#include <iostream>
#include <sstream>
using namespace std;
void rev() {
	string str = "42$John#3.14";
	stringstream ss(str);
	
	int pos1 = str.find("$");
	int pos2 = str.find("#");

	string intpart = str.substr(0, pos1);
	string namepart = str.substr(pos1+1, pos2 - pos1-1);
	string floatpart = str.substr(pos2 + 1);

	int num = stoi(intpart);
	 float n = stof(floatpart);

	 cout << "after extracting $# form one continuous string" << endl;
	 cout << "integer: " << num << endl;
	 cout << "name:" << namepart << endl;
	 cout << "float: " << n << endl;
}

int main() {
	rev();
}
