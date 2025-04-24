/*start table=2,[it should be print all two  table]

endtable=3
*/

#include <iostream>
using namespace std;
int main()
{
	int start_table,end_table;
	cout << "Enter the starting number:" << endl;
	cin >> start_table;
	cout << "end table:" << endl;
	cin >> end_table;
	for (int i = start_table;i<=end_table;i++)
	{
		for (int j = 1;j<=10;j++)
		{
			cout << i << "x" << j << "=" << (i * j) << "\t";
			
			

		}
		cout << "=============";
		return 0;
		
		 
	}
	
}