#include <iostream>
using namespace std;

typedef struct employee_details {
    int empId;
    
} EMP;

typedef struct work_details {
    int empId;
    int empWorkDays;
} WORK;

typedef struct salary_calculation {
    int empBasicSalary;
    int empId;
    int empVariableSalary;
    int empGrossSalary;
    int tax;
} SALARY;


int main() {
    get_details();
    return 0;
}

void get_details() {
    EMP emp[10];
    WORK work[10];
    SALARY salary[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for Employee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].empId;

        work[i].empId = emp[i].empId;
        salary[i].empId = emp[i].empId;

        cout << "Enter Basic Salary: ";
        cin >> salary[i].empBasicSalary;

        cout << "Enter Variable Salary: ";
        cin >> salary[i].empVariableSalary;

        cout << "Enter Tax: ";
        cin >> salary[i].tax;

        salary[i].empGrossSalary = salary[i].empBasicSalary + salary[i].empVariableSalary - salary[i].tax;

        cout << "======================" << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Employee ID: " << emp[i].empId << endl;
        cout << "Gross Salary: " << salary[i].empGrossSalary << endl;
        cout << "----------------------" << endl;
    }
}




 