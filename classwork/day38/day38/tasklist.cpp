#include <iostream>
#include <string>
#include <list>
#include <sstream>
using namespace std;

class Taskmanager {
	list<string>tasks;
public:
	void addTask(const string& task) {
		if (task.find("urgent") != string::npos) {
			tasks.push_front(task);
			cout << "Urgent task: " << task << endl;
		}
		else {
			tasks.push_back(task);
			cout << "added: " << task << endl;
		}
	}
	
	void removeTask(const string& task) {
		auto rem = find(tasks.begin(), tasks.end(), task);
		if (rem != tasks.end()) {
			tasks.erase(rem);
			cout << "Removed: " << task << "\n";
		}
		else {
			cout << "Task not found: " << task << "\n";
		}
	}

	void displayTask() {
		cout << "display all the tasks: " << endl;
		for (auto const& task : tasks) {
			cout << task << endl;

		}
	}


};

int main() {
    Taskmanager tm;
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

