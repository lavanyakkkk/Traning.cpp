/*#include <iostream>
using namespace std;
int num;
int main()
{
	cout << "enter num:";
	cin >> num;
	for (int row = 1;row <= num;row++) {
		for (int column = 1;column <= row;column++) {
			cout << "*";
			cout << " ";
		}
		cout << endl;

	}
}
*/

/*

#include <iostream>
using namespace std;
int num;
int main() 
{
	cout << "enter  num:" << endl;
	cin >> num;
	for (int row = num;row >= 1;--row) {
		for (int column =1;column <= row;++column) {
			cout << "* "<<" ";
			
		}
		cout << endl;

	}


}
*/

/*OUTPUT
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

*/

/*
#include <iostream>
using namespace std;
int num;
int main()
{
	cout << "enter num: ";
	cin >> num;
	for (int i = num;i >=1;--i) {
		for (int space = 5;space <= num - i;++space) {
			cout << " ";
			
		}
		for (int j = 1;j <= i;++j) {
			cout << "*" ;
		}
		cout << endl;
	}
	
}
*****
****
***
**
*
*/


/*
#include  <iostream>
using namespace std;
int num;


int main()
{
	cout << "enter num: ";
	cin >> num;
	for (int row = 1;row <= num;row++) {
		for (int space = 1;space <= num-row;space++) {
			cout << " ";
		}
		for (int column = 1;column <= row;column++) {
			cout << "*";
		}
		cout << endl;
	}

}
*/

#include <iostream>
using namespace std;
int num;
int main() 
{
	cout << "enter num: ";
	cin >> num;
	for (int row = 1;row <= num;row++) {
		for (int space = 1;space <= num-row;space++) {
			cout << " ";
		}
		for (int column = 1;column <= 2 * row- 1;column++) {
			cout << "*";
		}
		cout << endl;
	}


}




  
