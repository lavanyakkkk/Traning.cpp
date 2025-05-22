//parameterize constructor
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
	Employee(int id, string name) {
		cout << "parameterized Construct got called" << endl;
		e_id = 0;
		e_name = "name";
	}
	void disp() {
		cout << "disp function got called" << endl;
		cout << e_id << "\t" << e_name << endl;
	}
};
int main() {
	Employee e;
	//para const is getting called
	Employee e1(101, "abcd");
	cout << "e1" << endl;
	e1.display();

	//default copy const is getting called
	Employee e2(e1); 
	e.disp();
	return 0;
}