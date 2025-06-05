#include <iostream>
#include <vector>
using namespace std;

class student {
	int id;
	string name;
public:
	student(int id,string name):id(id),name(name){}
	void display() {
		cout << "ID: " << id << endl;
		cout << "NAME: " << name << endl;
	}
};

int main() {
	student s[3] = { {101,"ac"},{102,"av"},{103,"ak"} };
	student s1 = { 104,"ap" };
	student s2 = { 105,"aj" };
	student s3 = { 106,"ag" };

	for (auto e : s)
		e.display();

	vector<student>emp;

	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);

	for (auto e : emp)
		e.display();

	cout << emp.capacity() << endl;
	cout << emp.size() << endl;
	emp.front().display();
	emp.back().display();
	emp.at(10).display();
	catch (exception& e) {
		cout << "Error:  " << e.what() << endl;
	}
	return 0;
}

