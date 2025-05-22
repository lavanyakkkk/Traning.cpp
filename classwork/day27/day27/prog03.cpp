#include <iostream>
using namespace std;
class Employee {
private:
	int e_id;
	string e_name;
public:
	Employee() {
		cout << "constructor got called" << endl;
		e_id = 0;
		e_name = "Lavanya ";
	}
	void disp() {
		cout << "disp function got called" << endl;
		cout << e_id << "\t" << e_name << endl;
	}
};
int main() {
	Employee e;
	e.disp();
	return 0;
}