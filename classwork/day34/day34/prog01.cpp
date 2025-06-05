#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//create and write file
	ofstream fOut("data.txt");
	fOut << "Hello world!" << endl;
	fOut.close();
}