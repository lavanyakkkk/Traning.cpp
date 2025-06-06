/*VISIT user_id → Add a user
UNIQUE → Print number of unique visitors
TOP → Print user IDs in ascending order*/
#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

set<int> unique_user;

void visit(int user_id) {
    unique_user.insert(user_id);
}

void Unique() {
    cout << unique_user.size() << endl;
}

void display() {
    for (int i : unique_user) {
        cout << i << endl;

    }
    cout << endl;
}
int main() {
    visit(101);
    visit(105);
    visit(101);
    visit(110);

    Unique();
    display();

    return 0;
}

