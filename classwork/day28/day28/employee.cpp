/*Implement an employee class where in add,removing and display*/

#include <iostream>
using namespace std;
class Employee {
private:
	string name;
	int id;
public:
	void setName(string);
	string getname();
	void setId(int);
	int getId();
};
void Employee::setId(int i)
{
	id = i;
}
int Employee::getId() {
	return 
}