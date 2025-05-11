#include <iostream>
using namespace std;
int main()
{
	int j = 0;
	string str1;
	cout << "enter string: " << endl;
	cin >> str1;
	
	for (int i = 0;i < str1.length();i++)
	{
		char ch = str1[i];
		if (ch != 'a' && ch != 'e' && ch != 'i'&& ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') 
		{
			str1[j++] = ch;


		}
	}
		cout << "string without vowels: " << str1 << endl;
		return 0;

	}

}