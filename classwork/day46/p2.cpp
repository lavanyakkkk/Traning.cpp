/*#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream file("exam.txt", ios::app);
	file << "Hi ! my name is Lavanya" << endl;
	file << "I am cpp developer " << endl;
	file.close();
	return 0;
}*/

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream file("exam.txt");
	string line;
	while (getline(file, line)) {
		cout << line << endl;
	}
	file.close();
}*/

/*#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
int main() {
	ifstream file("exam.txt");
	string l;
	while (file >> l) {
		cout << l << endl;
	}
	file.close();
}*/

//get a input from user and then by using it read it
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string input;
	cout << "enter the line: ";
	getline(cin, input);
	ofstream outfile("d.txt");
	if (!outfile) {
		cout << "It is not opening" << endl;
	}
	outfile << input << endl;
	outfile.close();
	
	ifstream infile("d.txt");
	if (!infile) {
		cout << "it is not opening" << endl;
	}
	string line;
	getline(infile, line);
	cout << "content from file: " <<line<<endl;
	infile.close();
	return 0;
}*/

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string input;
	cout << "enter the input: " << endl;
	getline(cin, input);
	ofstream outfile("d1.txt");
	if (!outfile) {
		cout << "it is not opening" << endl;
	}
	outfile << input << endl;
	outfile.close();

	ifstream infile("d1.txt");
	if (!infile) {
		cout << "it is not opening" << endl;
	}
	string word;
	while (infile>>word) {
		cout << "content from file: " << word << endl;

	}
	
	infile.close();
	return 0;

}*/



