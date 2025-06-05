#include <iostream>
#include <forward_list>
#include <string>

class MessageClean {
private:
    std::forward_list<std::string> message;

public:
    MessageClean(const std::forward_list<std::string>& initialMsge)
        : message(initialMsge) {}

    
    void clean() {
        message.remove_if([](const std::string& msg) {
            return msg.rfind("DELETED:", 0) == 0;
            });
    }

    void printMessages() const {
        for (const auto& msg : message) {
            std::cout << msg << std::endl;
        }
    }
};

int main() {
    std::forward_list<std::string> initialMsge = {
        "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"
    };

    MessageClean cleaner(initialMsge);
    cleaner.clean();
    cleaner.printMessages();

    return 0;
}
