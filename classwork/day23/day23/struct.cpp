#include <iostream>
using namespace std;

typedef struct Employee {
    int empID;
    int empPhno;
    string empName;
    string empAddress;
    char empGender;
} EMP;

int main() {
   
    EMP el;
    el.empID = 101;
    el.empName = "Lavanya";
    el.empAddress = "Chennai";
    el.empGender = 'F';
    el.empPhno = 98983674;

    cout << "Size of EMP: " << sizeof(EMP) << "\tSize of el: " << sizeof(el) << endl;

    cout << "Name: " << el.empName << endl;
    cout << "ID: " << el.empID << endl;
    cout << "Gender: " << el.empGender << endl;
    cout << "Address: " << el.empAddress << endl;
    cout << "Phone Number: " << el.empPhno << endl;

  
    EMP e[3];

   
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> e[i].empName;
        cout << "ID: ";
        cin >> e[i].empID;
        cout << "Gender: ";
        cin >> e[i].empGender;
        cout << "Address: ";
        cin >> e[i].empAddress;
        cout << "Phone Number: ";
        cin >> e[i].empPhno;
    }

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: " << e[i].empName << endl;
        cout << "ID: " << e[i].empID << endl;
        cout << "Gender: " << e[i].empGender << endl;
        cout << "Address: " << e[i].empAddress << endl;
        cout << "Phone Number: " << e[i].empPhno << endl << endl;
    }

    return 0;
}
