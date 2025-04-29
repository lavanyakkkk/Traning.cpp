/*
. Categorize Temperature into Hot, Warm, Cold
Input temperature:

35 → Hot

20–35 → Warm
<20 → Cold
Use if-else ladder
*/

#include <iostream>
using namespace std;
int main()
{
	int temperature;
	cout << "Enter temperature: " << endl;
	cin >> temperature;
	
	if (temperature == 35)
	{
		cout << "The given temperature  is hot" << endl;
	}
	else if (temperature >= 20 && temperature <= 35) 
	{
		cout << " The given temperature is warm" << endl;

	}
	else if (temperature < 20)
	{
		cout << "The given temperature is cold " << endl;

	}
	else
	{
		cout << "The temperature is not unpredictable" << endl;
	}

	return 0;
	
}