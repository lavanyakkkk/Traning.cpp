#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void backgroundTask(int value) {
    std::this_thread::sleep_for(std::chrono::seconds(10));
    value += 10;
    cout << "Background task done. Updated value (inside thread) = " << value << endl;
}

int main() {
    int num = 5;
    thread t(backgroundTask, num);
    t.detach();

    cout << "Main is not blocked. Initial value = " << num << endl;
    std::this_thread::sleep_for(std::chrono::seconds(12));

    cout << "Final value in main = " << num << endl;

    return 0;
}
