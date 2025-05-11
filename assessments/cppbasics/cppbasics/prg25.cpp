/*Write a Program to Check if the Given String is Palindrome or Not*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str;
	cout << "enter the string: " << endl;
	cin >> str;
	int left = 0;
	int right = str.length()-1;
	
	while (left < right) {
		if (str[left] != str[right]) {
			cout << "it is not a palindrome" << endl;
			return 0;
		}
		left++;
		right--;
		
	}
	cout << "it is a palindrome" << endl;
	return 0;

	

	
}