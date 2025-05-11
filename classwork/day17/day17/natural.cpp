/*print all the natural numbers from 1 to 10 without using loops or goto and having not more than 6 lines of code excluding 
*/

#include <iostream>
using namespace std;
int main() {
	static int n = 1;//use of static it wont get until 
	if (n == 10)
		exit(EXIT_SUCCESS);
	cout << n++ << endl;
	main();
	return EXIT_SUCCESS;
}