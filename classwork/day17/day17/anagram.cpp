#include <iostream>
#include <algorithm>
using namespace std;
bool are_Anagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}
int main() {
    string str1, str2;
    cout << "Enter 1st string: ";
    cin >> str1;
    cout << "Enter 2nd string: ";
    cin >> str2;
    if (are_Anagram(str1, str2)) {
        cout << "The given strings are anagrams." << endl;
    }
    else {
        cout << "The given  strings are not anagrams." << endl;
    }

    return 0;
}
