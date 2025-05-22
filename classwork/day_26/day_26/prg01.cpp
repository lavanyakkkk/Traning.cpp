#include <iostream>
using namespace std;
class student {
private:
	int rollno;
    char name[20];
public:
	/*void display()
	{//string str1) {
		//cout << "hello" << " "<<str1 << endl;
		cout << "name:" << name << endl;
	}*/
	void setName(char* s) {
		strcpy(name, s);

	}
	char* getline() {
		return name;
	}
	void setRollno(int r) {
		rollno = r;
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << "Rollno: " << rollno << endl;
	}

};

int main() {
	/*student s;
	cout << sizeof(s) << endl;
	s.display();
	s.setName("Kumaran");
	s.display();
	*/
	char n[] = "abc";
	int r = 101;
	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.setRollno() << endl;
	strcat(str2, s1.setName());
	cout << str2 << endl;
	return 0;




}