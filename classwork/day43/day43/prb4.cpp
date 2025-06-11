#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& expr) {
    stack<char> s;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||(ch == '}' && top != '{') || (ch == ']' && top != '[')) 
            {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string input;
    cout << "Enter: ";
    cin >> input;

    if (isBalanced(input)) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not Balanced" << endl;
    }

    return 0;
}