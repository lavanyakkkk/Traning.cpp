#include <iostream>
using namespace std;
void display (void);
int  main()
{
	int ch;
	display();
	cin >> ch;
	switch (ch)
	{
	default:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "add" << endl;
		break;
	case 2:
		cout << "sub" << endl;
		break;
	case 3:
		cout << "exit" << endl;
		break;
	}
	return 0;

}

void display()
{
	cout << "press" << endl;
	cout << "add" << endl;
	cout << "sub" << endl;
	cout << "exit" << endl;
	cout << "choice" << endl;
}