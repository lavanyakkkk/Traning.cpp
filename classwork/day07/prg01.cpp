#include <iostream>
using namespace std;
#define MAXBITES 10
int main()
{
	int taste = 0;
	int plateEmpty= MAXBITES
		do {
			cout << "Have a bite of the food" << endl;
			plateEmpty--;
			cout << "How is the taste of the food (0/1): ";
			cin >> taste;


		} while ((taste > 0) && (plateEmpty > 0));

		if (plateEmpty == 0)
		{
			cout << "Person stoped eating as the plate was empty" << endl;
			cout << "And the foodwas awesome" << endl;
		}
		if (taste == 0)
		{
			cout << "Taste was not good enough after having" << (MAXBITES - plateEmpty);
			cout << "bites of food" << endl;
		}
		return 0;

}