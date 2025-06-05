#include <iostream>
#include <list>
#include <string>
using namespace std;

class Student {
    int id;
    string name;

public:
    Student(int id, string name) : id(id), name(name) {}

    int getId() const { 
        return id; 
    }
    void setId(int id) { 
        this->id = id;
    }

    string getName() const {
        return name;
    }
    void setName(string name) { 
        this->name = name; 
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << endl;
    }

    bool operator==(const Student& other) const {
        return id == other.id;
    }
};

void displayAll(const list<Student>& students) {
    for (const auto& s : students) {
        s.display();
    }
}

void removeById(list<Student>& students, int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            cout << "Student with ID " << id << " removed.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

int main() {
    list<Student> students;

    students.push_back(Student(101, "lavan"));
    students.push_back(Student(102, "tuffy"));
    students.push_back(Student(103, "puppy"));

    cout << "\nAll Students:\n";
    displayAll(students);

    cout << "\nRemoving student with ID 2:\n";
    removeById(students, 2);

    cout << "\nStudents after removal:\n";
    displayAll(students);

    return 0;
}
