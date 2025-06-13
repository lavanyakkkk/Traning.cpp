/*#include <iostream>
#include <fstream>    // for file I/O
#include <string>
using namespace std;
*/

/*Opening Files
There are two main classes:

ifstream – for reading

ofstream – for writing

fstream – for both read/write*/

/*. Writing to a File

ofstream outFile("output.txt"); // creates or overwrites file

if (outFile.is_open()) {
    outFile << "Hello, this is Lavanya!\n";
    outFile << "File handling is easy.\n";
    outFile.close(); // Always close after writing
} else {
    cout << "Could not open the file for writing.\n";
}*/

/* Reading from a File
cpp
Copy
Edit
ifstream inFile("output.txt"); // open for reading
string line;

if (inFile.is_open()) {
    while (getline(inFile, line)) {
        cout << line << endl;  // display each line
    }
    inFile.close();
} else {
    cout << "Could not open the file for reading.\n";
}*/

/*eading Char by Char

char ch;
while (inFile.get(ch)) {
    cout << ch;
}*/


/*ull Program – Read + Write

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out("test.txt");
    out << "C++ File Handling is easy.\n";
    out.close();

    ifstream in("test.txt");
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();
    return 0;
}*/