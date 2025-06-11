/*
Print Job Scheduling (Queue)
Problem: You have a queue of print jobs. Each job has a user name and a number of pages.
Print jobs are processed in order, but if a job exceeds 10 pages, it should be split into
chunks of 10 pages and processed as multiple jobs.

Input: A list of print jobs in the format: <username> <pages>

Output: Print the order in which jobs are processed, showing the user and pages printed per chunk.

i/p:
Alice 15
Bob 8
Charlie 23
o/p:
Processing: Alice 10 pages
Processing: Alice 5 pages
Processing: Bob 8 pages
Processing: Charlie 10 pages
Processing: Charlie 10 pages
Processing: Charlie 3 pages
*/

#include <iostream>
#include <queue>
#include <istream>
#include <string>
using namespace std;
struct Job {
    string name;
    int pages;

    Job(string name, int pages) :name(name), pages(pages) {}
};

void display() {

    queue<Job> jobQueue;
    jobQueue.emplace("Alice", 15);
    jobQueue.emplace("Bob", 8);
    jobQueue.emplace("Charlie", 23);
    while (!jobQueue.empty()) {
        Job a = jobQueue.front();
        jobQueue.pop();

        if (a.pages <= 10) {
            cout << "Processing: " << a.name << " " << a.pages << " pages" << endl;
        }
        else {
            cout << "Processing: " << a.name << " 10 pages" << endl;
            jobQueue.emplace(a.name, a.pages - 10);
        }
    }
}


int main() {
    display();
    return 0;
}