#include <iostream>
using namespace std;
class T {
private:
	static int val;
	


public:
	void disp() {
		cout << "Value of val: "<<val;
	}
};
int T::val;
int main() {
	T t1;
	t1.disp();
}
