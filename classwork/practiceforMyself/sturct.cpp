#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// Base class
class User {
protected:
    string username, password, role;
public:
    virtual bool login(const string& u, const string& p) = 0;
    virtual void displayMenu() = 0;
};

class Admin : public User {
public:
    Admin() {
        username = "admin";
        password = "123";
        role = "admin";
    }

    bool login(const string& u, const string& p) override {
        return u == username && p == password;
    }

    void displayMenu() override {
        int choice;
        do {
            cout << "\n--- Admin Menu ---\n";
            cout << "1. Add User\n2. Update User\n3. Lock User\n4. Unlock User\n5. View All Users\n6. Logout\nEnter choice: ";
            cin >> choice;
            cin.ignore();
            switch (choice) {
            case 1: addUser(); break;
            case 2: updateUser(); break;
            case 3: changeUserStatus("Inactive"); break;
            case 4: changeUserStatus("Active"); break;
            case 5: viewAll(); break;
            case 6: cout << "Logging out...\n"; break;
            default: cout << "Invalid choice!\n";
            }
        } while (choice != 6);
    }

    void addUser() {
        string uname, pass, role, name, desg, dept;
        cout << "Enter username: "; getline(cin, uname);
        cout << "Enter password: "; getline(cin, pass);
        cout << "Enter role (employee/manager): "; getline(cin, role);
        cout << "Enter full name: "; getline(cin, name);
        cout << "Enter designation: "; getline(cin, desg);
        cout << "Enter department: "; getline(cin, dept);

        ofstream cred("credentials.txt", ios::app);
        ofstream user("users.txt", ios::app);
        cred << uname << "," << pass << "," << role << "\n";
        user << uname << "," << name << "," << desg << "," << dept << ",Active\n";
        cred.close();
        user.close();
        cout << "User added successfully!\n";
    }

    void updateUser() {
        string uname;
        cout << "Enter username to update: "; getline(cin, uname);

        ifstream in("users.txt");
        ofstream out("temp.txt");
        string line;
        bool found = false;

        while (getline(in, line)) {
            stringstream ss(line);
            string u, name, desg, dept, status;
            getline(ss, u, ',');
            getline(ss, name, ',');
            getline(ss, desg, ',');
            getline(ss, dept, ',');
            getline(ss, status);

            if (u == uname) {
                found = true;
                cout << "Enter new name: "; getline(cin, name);
                cout << "Enter new designation: "; getline(cin, desg);
                cout << "Enter new department: "; getline(cin, dept);
            }
            out << u << "," << name << "," << desg << "," << dept << "," << status << "\n";
        }

        in.close();
        out.close();
        remove("users.txt");
        rename("temp.txt", "users.txt");

        if (found)
            cout << "User updated.\n";
        else
            cout << "User not found.\n";
    }

    void changeUserStatus(const string& newStatus) {
        string uname;
        cout << "Enter username to change status: "; getline(cin, uname);

        ifstream in("users.txt");
        ofstream out("temp.txt");
        string line;
        bool found = false;

        while (getline(in, line)) {
            stringstream ss(line);
            string u, name, desg, dept, status;
            getline(ss, u, ',');
            getline(ss, name, ',');
            getline(ss, desg, ',');
            getline(ss, dept, ',');
            getline(ss, status);

            if (u == uname) {
                found = true;
                status = newStatus;
            }
            out << u << "," << name << "," << desg << "," << dept << "," << status << "\n";
        }

        in.close();
        out.close();
        remove("users.txt");
        rename("temp.txt", "users.txt");

        if (found)
            cout << "Status updated to " << newStatus << ".\n";
        else
            cout << "User not found.\n";
    }

    void viewAll() {
        ifstream in("users.txt");
        string line;
        cout << "\n--- All Users ---\n";
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    }
};

class Manager : public User {
public:
    bool login(const string& u, const string& p) override {
        ifstream cred("credentials.txt");
        string line;
        while (getline(cred, line)) {
            stringstream ss(line);
            string uname, pass, r;
            getline(ss, uname, ',');
            getline(ss, pass, ',');
            getline(ss, r);
            if (uname == u && pass == p && r == "manager") {
                username = u; role = r; return true;
            }
        }
        return false;
    }

    void displayMenu() override {
        cout << "\n--- Manager Menu ---\n";
        cout << "Employees under same department:\n";
        ifstream ufile("users.txt");
        string line, dept;

        // First get manager's department
        while (getline(ufile, line)) {
            stringstream ss(line);
            string u, name, desg, d, status;
            getline(ss, u, ',');
            getline(ss, name, ',');
            getline(ss, desg, ',');
            getline(ss, d, ',');
            getline(ss, status);
            if (u == username) {
                dept = d;
                break;
            }
        }

        ufile.clear();
        ufile.seekg(0);
        while (getline(ufile, line)) {
            stringstream ss(line);
            string u, name, desg, d, status;
            getline(ss, u, ',');
            getline(ss, name, ',');
            getline(ss, desg, ',');
            getline(ss, d, ',');
            getline(ss, status);
            if (d == dept && u != username) {
                cout << line << endl;
            }
        }
    }
};

class Employee : public User {
public:
    bool login(const string& u, const string& p) override {
        ifstream cred("credentials.txt");
        string line;
        while (getline(cred, line)) {
            stringstream ss(line);
            string uname, pass, r;
            getline(ss, uname, ',');
            getline(ss, pass, ',');
            getline(ss, r);
            if (uname == u && pass == p && r == "employee") {
                username = u; role = r; return true;
            }
        }
        return false;
    }

    void displayMenu() override {
        cout << "\n--- Employee Menu ---\n";
        ifstream ufile("users.txt");
        string line;
        while (getline(ufile, line)) {
            if (line.find(username) == 0) {
                cout << line << endl;
                break;
            }
        }
    }
};

int main() {
    string uname, pass;
    cout << "Username: "; getline(cin, uname);
    cout << "Password: "; getline(cin, pass);

    if (uname == "admin") {
        Admin admin;
        if (admin.login(uname, pass)) {
            admin.displayMenu();
        }
        else {
            cout << "Invalid admin credentials!\n";
        }
    }
    else {
        Manager mgr;
        Employee emp;
        if (mgr.login(uname, pass)) {
            mgr.displayMenu();
        }
        else if (emp.login(uname, pass)) {
            emp.displayMenu();
        }
        else {
            cout << "Login failed! Invalid credentials.\n";
        }
    }

    return 0;
}
