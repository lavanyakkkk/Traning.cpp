/*
3. Task Priority Scheduler (Priority Queue)
Problem: You need to schedule tasks based on their priority.
Each task has a string description and a priority integer.
Process tasks starting with the highest priority first.

Input: A list of tasks with descriptions and priority values.

Output: Print tasks in order of execution.

Sample Input:
FixBug 5
ImplementFeature 8
CodeReview 3
Deploy 8

Expected Output:
Execute: ImplementFeature with priority 8
Execute: Deploy with priority 8
Execute: FixBug with priority 5
Execute: CodeReview with priority 3

*/

#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
struct Task {
    string description;
    int priority;

    Task(string desc, int p ): description(desc), priority(p) {}
};
struct CompareTask {
    bool operator()(const Task& a, const Task& b) {
        return a.priority < b.priority;
    }
};
void display() {
    priority_queue<Task, vector<Task>, CompareTask> t;
    t.emplace("FixBug", 5);
    t.emplace("ImplementFeature", 8);
    t.emplace("CodeReview", 3);
    t.emplace("Deploy", 8);
    while (!t.empty()) {
        Task current = t.top();
        t.pop();
        cout << "Execute: " << current.description << " with priority " << current.priority << endl;
    }

}

int main() {
    display();
    return 0;
}