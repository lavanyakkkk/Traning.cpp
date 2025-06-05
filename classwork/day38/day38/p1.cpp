#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class TaskManager {
    list<string> tasks;

public:
    void addTask(const string& task) {
        // If task contains "critical", add to front (priority)
        if (task.find("critical") != string::npos) {
            tasks.push_front(task);
            cout << "Added (priority): " << task << "\n";
        }
        else {
            tasks.push_back(task);
            cout << "Added: " << task << "\n";
        }
    }

    void urgentTask(const string& task) {
        tasks.push_front(task);
        cout << "Urgently added: " << task << "\n";
    }

    void removeTask(const string& task) {
        auto it = find(tasks.begin(), tasks.end(), task);
        if (it != tasks.end()) {
            tasks.erase(it);
            cout << "Removed: " << task << "\n";
        }
        else {
            cout << "Task not found: " << task << "\n";
        }
    }

    void showTasks() const {
        if (tasks.empty()) {
            cout << "No tasks.\n";
            return;
        }
        cout << "Current tasks:\n";
        for (const auto& task : tasks) {
            cout << "- " << task << "\n";
        }
    }
};

int main() {
    TaskManager tm;
    string line;

    cout << "Task Manager\n";
    cout << "Commands: add <task>, urgent <task>, remove <task>, show, exit\n";

    while (true) {
        cout << "> ";
        getline(cin, line);
        if (line.empty()) continue;

        stringstream ss(line);
        string command;
        ss >> command;

        // Get the rest of the line as the task name (may contain spaces)
        string task;
        getline(ss, task);
        // Trim leading spaces from task string
        task.erase(0, task.find_first_not_of(' '));

        if (command == "add") {
            if (task.empty()) {
                cout << "Error: No task specified for add.\n";
            }
            else {
                tm.addTask(task);
            }
        }
        else if (command == "urgent") {
            if (task.empty()) {
                cout << "Error: No task specified for urgent.\n";
            }
            else {
                tm.urgentTask(task);
            }
        }
        else if (command == "remove") {
            if (task.empty()) {
                cout << "Error: No task specified for remove.\n";
            }
            else {
                tm.removeTask(task);
            }
        }
        else if (command == "show") {
            tm.showTasks();
        }
        else if (command == "exit") {
            cout << "Exiting.\n";
            break;
        }
        else {
            cout << "Unknown command: " << command << "\n";
        }
    }

    return 0;
}
