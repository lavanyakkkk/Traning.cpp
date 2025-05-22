#include <iostream>
#include <cstring>  
using namespace std;

union Employee {
    int id;
    char name[20];  
};

int main() {
    Employee e;
    e.id = 101;
    cout << "ID (before name assignment): " << e.id << endl;
    strcpy_s(e.name, sizeof(e.name), "lavanya");

    cout << "Name: " << e.name << endl;
    //cout << "ID (before name assignment): " << e.id << endl;
    return 0;
}


