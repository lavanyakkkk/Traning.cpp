/*Write a Program to Count the Number of Vowels*/

#include <iostream>
#include <cstring>
using namespace std;

void count_vowels(string);
int main() {
	string str;
	cout << "enter the string: " << endl;
	cin >> str;
	count_vowels(str);
}

void count_vowels(string str)
{
	int count = 0;
	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'u') {
			count++;
		}

	}
	cout << "the counting of vowels is: " <<count<<endl;
}