#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
private:
	int id;
	string name;
	string dep;
public:
	Employee(int id, string name,string dep):id(id),name(name),dep(dep){}
	void display() const {
		cout << "ID: " << id << "Name: " << name << "Department: " << dep << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() const{
		return name;
	}
	void setId(int id) {
		this->id = id;
	}
	int getId() const {
		return id;
	}
	void setDep(string dep) {
		this->dep = dep;
	}
	string getDep() const {
		return dep;
	}
	void setValues() {
		cin >> id >> name >> dep;
	}
	
	
	friend istream& operator>>(istream& input, Employee& e) {
		input >> e.id >> e.name >> e.dep;
		return input;
	}

	friend ostream& operator>>(ostream& output, Employee& e) {
		output << e.id << e.name << e.dep;
		return output;
	}



};

int main() {
	int id;
	string name;
	string dep;

	istream_iterator<Employee> inIt(std::cin);
	istream_iterator<Employee> endIt;

	vector<Employee> emp;

	while (inIt != endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}

	cout << "\n--- Employee List ---" << endl;
	for (auto it = emp.begin(); it != emp.end(); ++it)
		it->display();

	return 0;

}