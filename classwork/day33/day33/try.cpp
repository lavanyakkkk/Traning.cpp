#include <iostream>
using namespace std;
int main() {
	string err = "Lavanya";
	string dbyZeroError = "Divivde by error occured";
	string nullPtrErr = "Memory allocation failed";
	char* ptr = nullptr;

	int n1 = 10, n2 = 0;
	try {
		/*if (n2 == 0)
		throw dbyZeroError;*/
		if (ptr == nullptr)
			throw nullPtrErr;
	}
	catch (int e) {
		cout << "caught an  exception: " << e << endl;
	}
	catch (string e) {
		cout << "Caught an exception: " << e << endl;
	}
	return 0;
}