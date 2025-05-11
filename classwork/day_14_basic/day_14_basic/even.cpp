#include <iostream>
using namespace std;
int main() {
	int start_range, end_range;
	cout << "enter the start and end range: " << endl;
	cin >> start_range>>end_range;
	
	for (int i = start_range;i <= end_range;i++) {
		if (i % 2 == 0) 
		{
			cout << "the even number are: "<<" " << i << endl;
		}
		
		
	}
	return 0;
	
}