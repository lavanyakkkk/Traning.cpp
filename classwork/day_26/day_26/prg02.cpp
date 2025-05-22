#include <iostream>
#include <cstring>  
using namespace std;

class student {
private:
    int rollno;
    char name[20];
public:
   
    void setName(const char* s) {
        strcpy(name, s);
    }

    
    const char* getName() {
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
    char n[] = "abc"; 
    int r = 101;     

    student s1;
    s1.setRollno(r); 
    s1.setName(n);   
    s1.display()    

    cout << "Student's name: " << s1.getName() << endl;
    char str2[50] = "Hello, ";
    strcat(str2, s1.getName());
    cout << "Concatenated string: " << str2 << endl;

    return 0;
}
