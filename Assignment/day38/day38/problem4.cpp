#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

class logger {
    forward_list<string>logs;
    int maxSize;
    int log_count;
public:
    logger(int size) :maxSize(size), log_count(0) {}

    void addlog(const string& log) {
        logs.push_front(log);
        log_count++;

        if (log_count > maxSize) {
            auto it = logs.before_begin();
            auto next = logs.begin();

            while (next != logs.end()) {
                auto nextNext = next;
                ++nextNext;
                if (nextNext == logs.end()) {
                    logs.erase_after(it);
                    break;
                }
                ++it;
                ++next;
            }

            log_count--;
        }
    }

    void showLogs() {
        cout << "Logs (newest : oldest):\n";
        for (const string& log : logs) {
            cout << log << endl;
        }
        cout << endl;
    }
};

int main() {
    logger l(3);

    l.addlog("Log 1");
    l.addlog("Log 2");
    l.addlog("Log 3");
    l.showLogs();

    l.addlog("Log 4");
    l.showLogs();

    l.addlog("Log 5");
    l.showLogs();

    return 0;
}
