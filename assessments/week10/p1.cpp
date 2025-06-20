#include <iostream>
using namespace std;
char FirstUniqueChar(char* str) {
    int freq[26] = { 0 };
    int i = 0;
    while (str[i] != '\0') {
        freq[str[i] - 'a']++;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (freq[str[i] - 'a'] == 1)
            return str[i]; 
        i++;
    }

    return ' ';  
}
int main() {
    char str[101];
    cout << "Enter a lowercase string: ";
    cin >> str;
    char result = FirstUniqueChar(str);
    if (result != ' ')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
