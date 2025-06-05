/*Problem Statement: Create a class Employee with basic details (empId, name). Create two base classes Developer and Manager which inherit Employee and contain role-specific data (coding hours and team size respectively). Derive a class TechLead from both Developer and Manager. Use constructors to initialize data. Overload a function calculateSalary() to:

Calculate salary based on only coding hours
Calculate salary based on coding hours + team size*/

#include <iostream>
using namespace std;
class Employee {
public:
	string name;
protected:
	int empId;
public:
	Employee(string name, int empId) {
		this->name = name;
		this->empId = empId;
	}
 };
class Developer :public Employee {
protected: 
	int hours;
public:
	Developer(string name, int empId, int hours) :Employee (name, empId, hours) 
	{
		this->hours = hours;
	}
};

class Manager :public Employee {
protected :
	int teamSize;
public:
	Manager(string name,int empId,int hours):Developer(name,empId)





/*
 first understand the syntax of inheritance
 then write the syntax of inherit from one class to another
 then write the syntax of one class to another to another 
 ask one doubt for each class we doing in a program we have to give display for each one 
 what happend if i give the protect or private while inheriting 


* 
*/
};