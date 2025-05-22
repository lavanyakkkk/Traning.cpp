#include <iostream>
#include <vector>
using namespace std;
struct data_join {
    int date, month, year;
};

struct Employee {
    int id;
    string employee_name; 
    string designation;    
    float salary;
    data_join joining_date;  
};

void employee_details(Employee& emp) {
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cout << "Enter Employee Name: ";
    cin >> emp.employee_name;
    cout << "Enter Employee Designation: ";
    cin >> emp.designation;
    cout << "Enter Employee Salary: ";
    cin >> emp.salary;
    cout << "Enter Joining Date (DD MM YYYY): ";
    cin >> emp.joining_date.date >> emp.joining_date.month >> emp.joining_date.year;
}
void display_employee_details(const Employee& emp) {
    cout << "\nEmployee Details:\n";
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.employee_name << endl;
    cout << "Designation: " << emp.designation << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Joining Date: " << emp.joining_date.date << "/"
        << emp.joining_date.month << "/"
        << emp.joining_date.year << endl;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    vector<Employee> employees(n);
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        employee_details(employees[i]);
    }
    for (int i = 0; i < n; i++) {
        display_employee_details(employees[i]);
    }

    return 0;
}



