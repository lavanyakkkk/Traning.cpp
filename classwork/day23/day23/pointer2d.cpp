/*#include <iostream>
using namespace std;
int main() {
	int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 5;j++) {
			cout << "address =" << (unsigned long int) & a[i][j] << "\tvalue=" << a[i][j] << endl;
		}
	}

}
*/

#include <iostream>
using namespace std;
int main() {
	int a[3][5] = { {1,2,3,4,5},{11,12,13,14,15},{16,17,18,19,20} };
	int row;
	cout << "enter the row number: " << endl;
	cin >> row;
	for (int col = 0;col < 5;col++) {
		cout << *(*(a+row)+col) << endl;

	}
	//cout << "single element: " << *(a + 1) << endl;
	//cout << "single element: " << *(*(a)+1) << endl;
	//cout << "single element: " << *(*(a + 2)) << endl;

	return 0;
}

 




