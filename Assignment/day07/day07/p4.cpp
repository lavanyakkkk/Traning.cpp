#include <iostream>
using namespace std;
int main()
{
	int start_table, final_table;
	cout << "enter start table:" << endl;
	cin >> start_table;
	cout << "enter final table:" << endl;
	cin >> final_table;
	for (int i = 0;i <= 10;i++)
	{
		for (int j = start_table;j <= final_table ;j++)
		{
			cout << i << "x" << j << "=" << (i * j) << "/t";
			cout << endl;

		}
	}
}