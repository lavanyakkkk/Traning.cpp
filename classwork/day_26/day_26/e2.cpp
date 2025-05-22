#include <iostream>
using namespace std;
class student {
private:
	int rollno;
	char name[20];
	char department[20];
	int phonenum;
	char state[20];
	char district[20];

public:
	void setName(const char* n) {
		strcpy(name, n);
	}
	const char* getName() {
		return name;
	}
	void setDepartment(const char* D) {
		strcpy(department, D);
	}
	const char* getDepartment() {
		return department;
	}
	void setRollno(int r) {
		rollno = r;
	}
	void setPhonenum(int p) {
		phonenum = p;
	}
	void setState(const char* s) {
		strcpy(state, s);
	}
	const char* getState() {
		return state;

	}
	void setDistrict(const char* d) {
		strcpy(district, d);
	}
	const char* getDistrict() {
		return district;
	}
	void display() {
		cout << "enter the Name: " << name << endl;
		cout << "enter the Rollno: " << rollno << endl;
		cout << "enter the phone number: " << phonenum << endl;
		cout << "enter the state: " << state << endl;
		cout << "enter the distict: " << district << endl;
		cout << "enter the department: " << department << endl;

	}
};

int main() {
	char n[] = "lavanya";
	int r = 101;
	int p = 23876487234;
	char s[] = "tamilnadu";
	char d[] = "chennai";
	char D[] = "IT";

	student s1;
	s1.setName(n);
	s1.setRollno(r);
	s1.setPhonenum(p);
	s1.setState(s);
	s1.setDistrict(d);
	s1.setDepartment(D);
	s1.display();


	/*	cout << "Student's name: " << s1.getName() << endl;
		//cout << "student's rollnum: " << s1.setRollno() << endl;
		cout << "student's phonenumber: " << s1.setPhonenum() << endl;

		*/



