#include <iostream>
#include <sstream>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <string>
/*
int main() {
    std::map<int, std::string> students;

    // Insert using insert()
    students.insert({ 101, "Sreelakshmi" });
    students.insert({ 102, "Vijayalaxmi" });

    // Insert using operator[]
    students[103] = "Sneha";


    // Insert using emplace()
    students.emplace(104, "Gouri");

    // Access using at()
    std::cout << "Student 102: " << students.at(102) << "\n";

    // Access using operator[]
    std::cout << "Student 103: " << students[103] << "\n";
    students[113] = "Vismaya";
    std::cout << "Student 113: " << students[113] << "\n";

    // Check size
    std::cout << "Total students: " << students.size() << "\n";

    // Check existence using count()
    if (students.count(103) == 0)
        std::cout << "Student 105 not found.\n";

    // Find element
    auto it = students.find(111);
    if (it != students.end())
        std::cout << "Found Student 101: " << it->second << "\n";
    else
        std::cout << "not found" << std::endl;

    // Erase a student
    students.erase(102);
    std::cout << "After erasing 102, size: " << students.size() << "\n";

    // Iterate over the map
    std::cout << "All students:\n";
    for (const auto& pair : students) {
        std::cout << "Roll: " << pair.first << ", Name: " << pair.second << "\n";
    }

    // lower_bound and upper_bound
    std::cout << "Lower bound of 103: " << students.lower_bound(103)->first << "\n";
    if (students.upper_bound(103) != students.end())
        std::cout << "Upper bound of 103: " << students.upper_bound(103)->first << "\n";

    // Clear all entries
    students.clear();
    std::cout << "Map cleared. Empty? " << std::boolalpha << students.empty() << "\n";

    return 0;
}
*/
/*

Student 102: Vijayalaxmi
Student 103: Sneha
Total students: 4
Student 105 not found.
Found Student 101: Sreelakshmi
After erasing 102, size: 3
All students:
Roll: 101, Name: Sreelakshmi
Roll: 103, Name: Sneha
Roll: 104, Name: Gouri
Lower bound of 103: 103
Upper bound of 103: 104
Map cleared. Empty? true


*/

using namespace std;
class Emp
{
public:
    Emp(int id, std::string name) : id(id), name(name) {}
    void disp() {
        cout << "ID: " << id << "\tName: " << name << endl;
    }
private:
    int id;
    string name;

};
int main()
{
    Emp e1(101, "abc1");
    Emp e2(102, "abc2");
    std::map<int, vector<Emp>> mapEmp;

    vector<Emp> v;
    v.push_back(e1);
    v.push_back(e2);

    mapEmp[1] = v;

    auto i = mapEmp.begin();
    auto ele = i->second;
    for (auto j : ele)
        j.disp();

}

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Emp {
public:
    Emp(int id, string name, char gender, double salary)
        : id(id), name(name), gender(gender), salary(salary) {}

    void disp() const {
        cout << "ID: " << id
            << "\tName: " << name
            << "\tGender: " << gender
            << "\tSalary: " << salary
            << endl;
    }

    int getId() const { return id; }

private:
    int id;
    string name;
    char gender;
    double salary;
};

int main() {
    // Create some employees
    Emp e1(101, "abc1", 'm', 1000);
    Emp e2(102, "abc2", 'f', 2000);
    Emp e3(101, "abc3", 'm', 1500);

    // Map from employee ID to a vector of employees
    map<int, vector<Emp>> mapEmp;

    // Insert employees
    mapEmp[e1.getId()].push_back(e1);
    mapEmp[e2.getId()].push_back(e2);
    mapEmp[e3.getId()].push_back(e3);

    // Display all employees grouped by their ID
    for (const auto& pair : mapEmp) {
        cout << "Key (Emp ID): " << pair.first << endl;
        for (const auto& emp : pair.second) {
            emp.disp();
        }
        cout << "--------------------" << endl;
    }

    return 0;
}

/**/