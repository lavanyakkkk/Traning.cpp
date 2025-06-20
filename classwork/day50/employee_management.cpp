/*here i want to create the login system for employee and manager
->in this admin can create the login credentials for employee an d amanger 
->even admin is harded as admin username as admin and password as 123 as const and 
->then admin can having capability adding the meployee and manager details->add,update,lock considered employee as resigned adn unlock employee as rejoined 
->the employee & manager details should be store in .txt 
->here manager can able to see the employee details who are coming under his/her control
->the employee can see only their own  details  only
->admin can able to see all the details
->two files only
*/
/*virtual bool login(const string& u, const string& p) = 0;
    virtual void displayMenu() = 0;
};*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
class user {
protected:
	string username;
	string password;
	string role;
public:
	virtual bool login(const string& u, const string& p)=0;
	virtual void display() = 0;
};
class admin :public user {
public:
	admin() {
		username = "admin";
		password = "admin@123";
		role = "admin";
	}
	bool login(const string& u, const string& p) {
		return u == username && p == password;
	}
	void display() override {
		int choice;
		do {
			cout << "enter your choice: " << endl;
			cout << "1.Add User\n 2.Update user\n 3.Lock User\n 4.Unlock User\n ";
			cin >> choice;
			switch (choice) {
			case 1: addUser(); break;
			case 2: updateUser(); break;
			//case 3: lockUser(); break;
			//case 4: unlockUser(); break;
			default:
				cout << "Invalid choice" << endl;
			}
		} while (choice != 4);
	}

	void addUser() {
		int uid;
		string  passwrd, role, name;
		int phoneNumber;
		cout << "enter the uid: " << endl;
		cin >> uid;
		cout << "enter the password: " << endl;
		getline(cin, passwrd);
		cout << "enter the name of employee/manager: " << endl;
		getline(cin, name);
		cout << "enter the role(employee/manager): " << endl;
		getline(cin, role);
		
		ofstream cred("credentials.txt", ios::app);
		ofstream User("user.txt", ios::app);
		cred << uid<< "," << passwrd << "," << name << "," << role << endl;
		User << uid<< "," << name << "," << role << "," << endl;
		cred.close();
		User.close();
		cout << "successfully logged" << endl;
	}
	void updateUser() {
		int uid;
		cout << "enter the uid wanted to update: " << endl;
		cin >> uid;
		ifstream infile("user.txt");
		ofstream outfile("temp.txt");
		string l;
		bool found = false;

		while (getline(infile, l)) {
			stringstream ss(l);
			string strid,name, role;
			getline(ss, strid, ',');
			getline(ss, name, ',');
			getline(ss,role, ',');
			int idNum = stoi(strid);
			if (idNum == uid) {
				cout << "enter the name: " << endl;
				cout << "enter the role: " << endl;
				cout << "enter the u: " << endl;
			}
			outfile << strid << "," << name << "," << role << "," << endl;
		}
		infile.close();
		outfile.close();
		remove("user.txt");
		rep
		




	}



};
