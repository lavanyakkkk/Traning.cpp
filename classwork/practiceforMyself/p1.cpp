//using apple,banana,mango
//separating into words

/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string line = "apple,word,banana";
    int s = 0;
    int e;

    while ((e = line.find(",", s)) != string::npos) {
        string store = line.substr(s, e - s);
        cout << store << endl;
        s = e + 1;
    }
    cout << line.substr(s) << endl; // Print the last token
}
*/

/*
#include <iostream>
#include <string>
using namespace std;
int main() {
    string l = "apple,orange,banana,watermeleon";
    size_t s = 0;
    size_t e;
    size_t count = 0;
    string longest = " ";
    while ((e = l.find(",", s)) != string::npos) {
        string store = l.substr(s, e - s);
        cout << store << endl;
        count++;
        if (store.length() > longest.length()) {
            longest = store;
        }

        s = e + 1;
    }
    string last = l.substr(s);
    cout << last << endl;
    count++;

    if (last.length() > longest.length()) {
        longest = last;
    }

    cout << "Total words: " << count << endl;
    cout << "Longest word: " << longest << endl;
}
*/

/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    //string line = "apple####banana####orange";
    string line = "apple####banana####orange";
    size_t s = 0;
    size_t e;
    string token;

    while ((e = line.find("####", s)) != string::npos) {
        token = line.substr(s, e - s);
        cout << token << endl;
        s = e + 4; 
    }
    token = line.substr(s);
    cout << token << endl;

    return 0;

}*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string c = "123";
    int num = stoi(c);
   
        cout << num << endl;
  
    
}
/*#include <iostream>
using namespace std;

char FirstUniqueChar(char* str) {
    int count[26] = {0};

    // Count frequency of each character (assumes lowercase only)
    for (int i = 0; str[i] != '\0'; ++i) {
        count[str[i] - 'a']++;
    }

    // Find the first character with count 1
    for (int i = 0; str[i] != '\0'; ++i) {
        if (count[str[i] - 'a'] == 1) {
            return str[i];
        }
    }

    return ' ';  // No non-repeating character
}

int main() {
    char str1[] = "appliedmaterials";
    char str2[] = "abacbc";

    cout << "First unique in \"" << str1 << "\": " << FirstUniqueChar(str1) << endl;
    cout << "First unique in \"" << str2 << "\": " << FirstUniqueChar(str2) << endl;

    return 0;
}
*/