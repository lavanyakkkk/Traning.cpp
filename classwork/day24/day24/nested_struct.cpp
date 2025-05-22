/*
#include <iostream>
using namespace std;
typedef struct shape {
	int length;
	int width;
}SHAPE;
int main() {
	SHAPE s1, s2;
	s1.length = 10;
	s1.width = 20;

	s2.length = 30;
	s2.width = 40;

	SHAPE s3;
	s3.length = s1.length + s2.length;
	s3.width == s1.width + s2.width;

	SHAPE s4 = s3;
	cout << s4.length << "\t" << s4.width << endl;

	s4.length = 100;
	s4.width = 70;
	cout << s3.length << "\t" << s3.width << endl;

	s4.length = s3.width;
}*/

#include <iostream>
using namespace std;
struct Date {
	int day, month, year;
};
typedef struct Employee {
	int id;
	string name;
	/*struct DATE {
		int day, month, year;
	}D;*/
	Date joiningdate;
};

int main() {
	struct Employee e;
	e.id = 101;
	e.name = "lavanya kumaran";
	e.joiningdate.day = 10;
	e.joiningdate.month = 05;
	e.joiningdate.year = 2025;


	cout << "size of employee: " << sizeof(e) << endl;
	cout << "size of date: " << sizeof(Date) << endl;
	cout << "szie of id:" << sizeof(e.id) << endl;
	cout << "address of id:" << e.joiningdate.year << endl;


	cout << "Employee ID: " << e.id << endl;
	cout << "Employee name: " << e.name << endl;
	cout << "Employee joining date: " << e.joiningdate.day << "/" << e.joiningdate.month << "/" << e.joiningdate.year << endl;


}