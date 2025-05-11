/*Write a Program to Remove the Vowels from a String*/
#include <iostream>
#include <cstring>
#include <string>
#include <cctype> 
using namespace std;
void remove_vowels(string);
int main()
{
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str);
    remove_vowels(str);
}

void remove_vowels(string str)
{
    string result = "";  
    char vowels[] = { 'a','e','i','o','u','A','E','I','O','U' };
    for (int i = 0; str[i] != '\0'; i++) {
        bool isVowel = false;
        for (int j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                isVowel = true;
                break; 
            }
        }
        if (!isVowel) {
            result += str[i];
        }
    }
    cout << "After removal of vowels: " << result << endl;
}
