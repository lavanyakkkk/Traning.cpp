/*
Emergency Room Queue (Priority Queue with Custom Comparator)
Problem:

Patients arrive at the emergency room.
Each patient has a name, age, and severity score.
Patients with higher severity are treated first.
If severity is the same, older patients have higher priority.

Input: List of patients in format: <name> <age> <severity>

Output: Print patients in order of treatment.

Sample Input:
John 65 5
Alice 70 5
Bob 30 7
Eve 40 5

Expected Output:
Treating: Bob, Age: 30, Severity: 7
Treating: Alice, Age: 70, Severity: 5
Treating: John, Age: 65, Severity: 5
Treating: Eve, Age: 40, Severity: 5

*/
#include <iostream>
#include <queue>
#include <string>
#include <deque>
using namespace std;
struct EmergencyRoom {
	string name;
	int age;
	int severity_score;

	EmergencyRoom(string name, int age, int severity_score) :name(name), age(age), severity_score(severity_score) {}
};
struct comparePatient {
	bool operator () (const EmergencyRoom& a, const EmergencyRoom& b) {
		if (a.severity_score == b.severity_score) {
			return a.age < b.age;
		}
		else {
			return a.severity_score < b.severity_score;
		}
	}
};
static void display() {
	priority_queue<EmergencyRoom, deque<EmergencyRoom>, comparePatient >patient;
	patient.emplace("John", 65, 5);
	patient.emplace("Alice", 70, 5);
	patient.emplace("Bob", 30, 7);
	patient.emplace("Eve", 40, 5);

	while (!patient.empty()) {
		EmergencyRoom top = patient.top();
		cout << "name: " << top.name << " " << "age: " << top.age << " " << "severity: " << top.severity_score << endl;
		patient.pop();

	}


}

int main() {
	display();
	return 0;



}