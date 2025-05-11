#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str1;
	cout << "enter string: " ;
	cin >> str1;
	string result = " ";
	int length = str1.length();
	for (int i = 0;i < str1.length() - 1;i++) {
		result += str1[i];
	}
	cout << "the removed string is: " << result << endl;
	return 0;

}