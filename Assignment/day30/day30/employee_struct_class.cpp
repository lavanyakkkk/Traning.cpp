#include <iostream>
#define MAX 1000
#include <cstring>
using namespace std;
class Employee {
public:
	int id;
	char name[51];
	float Salary;

	Employee(const int Id, char* Name, float S) {
		strcpy(name, Name);
		id = Id;
		Salary = S;
	}
};
class node {
public:
	Employee* emp;
	node* next;
	node(Employee* e) {
		emp = e;
		next = nullptr;
	}
};