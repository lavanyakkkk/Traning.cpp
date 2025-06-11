/*Sentence to Words and Back:

Parse a sentence into words and store them in a vector.

Print the words, then reassemble the sentence by joining the words with a space.*/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void parserword() {
	string sentence = "thsi si a cpp programming";
	stringstream ss(sentence);
	string str;
	vector<string>strs;
	
	while (ss >> str) {
		strs.push_back(str);

	}
	for (const string& word : strs) {
		cout << word << endl;
	}
}
int main() {
	parserword();
	return 0;

}