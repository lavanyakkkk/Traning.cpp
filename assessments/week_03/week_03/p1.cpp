/*
string
*/


#include <iostream>
#include <string>
using namespace std;
int main() {
    string input_string;
    cout << "enter a string: " << endl;
    getline(cin, input_string);
    int posare = input_string.find("are");
    int posi = input_string.find("i");
    if (posare == string::npos) {
        posare = -1;

    }
    if (posi == string::npos) {
        posi = -1;
    }
    int sum = posare + posi;
    cout << "the sum is = " << sum << endl;
    return 0;
    
}
















