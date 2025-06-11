#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void parser() {
	string str = "this is me "; 
	stringstream ss(str);
	
	string word;
	vector<string>words;

	

	while (ss >> word) {
		words.push_back(word);
	}

	cout << "total count is: " << words.size() << endl;

	for (const string& i : words) {
		cout << i << endl;
	}

	
}

int main() {
	parser();
	return 0;
}