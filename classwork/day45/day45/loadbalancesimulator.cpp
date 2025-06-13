#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <thread>
#include <mutex>
#include <chrono>
#include <vector>

using namespace std;
using namespace chrono;

// Structure to represent each Task
struct Task {
    string id;
    int load; // in seconds
};

// Shared task queue
queue<Task> taskQueue;
mutex queueMutex; // protects taskQueue

// Function for each CPU thread to run
void cpuWorker(int cpuId) {
    while (true) {
        Task currentTask;

        // Lock the queue and take a task
        {
            lock_guard<mutex> lock(queueMutex);
            if (taskQueue.empty()) break; // no more tasks
            currentTask = taskQueue.front();
            taskQueue.pop();

            cout << "CPU-" << cpuId << " picked Task " << currentTask.id
                << " (Load: " << currentTask.load << ")\n";
        }

        // Simulate work
        this_thread::sleep_for(seconds(currentTask.load));

        // Task done
        cout << "CPU-" << cpuId << " finished Task " << currentTask.id << "\n";
    }
}

int main() {
    ifstream file("input.txt");
    if (!file) {
        cerr << "Failed to open input.txt\n";
        return 1;
    }

    string line;
    int cpuCount = 0;

    // Read CPU count
    getline(file, line);
    if (line.rfind("CPUs:", 0) == 0) {
        cpuCount = stoi(line.substr(5));
    }

    // Read tasks
    while (getline(file, line)) {
        istringstream iss(line);
        string taskId, word;
        int load;

        getline(iss, taskId, ':');
        iss >> word >> load;

        taskQueue.push({ taskId, load });
    }

    // Start threads
    vector<thread> threads;
    for (int i = 1; i <= cpuCount; ++i) {
        threads.emplace_back(cpuWorker, i);
    }

    // Wait for all CPUs to finish
    for (auto& t : threads) {
        t.join();
    }

    cout << "All tasks completed.\n";
    return 0;
}