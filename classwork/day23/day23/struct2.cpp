#include <iostream>
using namespace std;

typedef struct employee_details {
    int empId;
    string empName;
} EMP;

typedef struct work_details {
    int empID;
    int empWorkDays;
} WORK;

typedef struct salary_calculation {
    int empBasicSalary;
    int empID;
    int empVariableSalary;
    int empGrossSalary;
    int tax;
} SALARY;

void employee() {
    EMP emp[10];
    WORK work[10];
    SALARY salary[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for Employee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].empId;

        cout << "Enter Employee Name: ";
        cin >> emp[i].empName;

        // Optional: Assign the same ID to work and salary structures
        work[i].empID = emp[i].empId;
        salary[i].empID = emp[i].empId;

        // Additional input for salary calculation (optional)
        cout << "Enter Basic Salary: ";
        cin >> salary[i].empBasicSalary;

        cout << "Enter Variable Salary: ";
        cin >> salary[i].empVariableSalary;

        cout << "Enter Tax Amount: ";
        cin >> salary[i].tax;

        salary[i].empGrossSalary = salary[i].empBasicSalary + salary[i].empVariableSalary - salary[i].tax;

        cout << "-------------------------------------" << endl;
    }

    // Output the data (optional)
    for (int i = 0; i < 10; i++) {
        cout << "\nEmployee ID: " << emp[i].empId;
        cout << "\nEmployee Name: " << emp[i].empName;
        cout << "\nGross Salary: " << salary[i].empGrossSalary;
        cout << "\n-----------------------------";
    }
}

int main() {
    employee();
    return 0;
}
