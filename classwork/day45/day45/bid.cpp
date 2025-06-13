#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <mutex>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

// =================== Bid Structure ===================
struct Bid {
    string bidder;
    double amount;
    steady_clock::time_point timestamp;

    bool operator<(const Bid& other) const {
        return amount < other.amount; // for max-heap
    }
};

// =================== Auction Class ===================
class Auction {
    string item;
    double minPrice;
    priority_queue<Bid> bids;
    steady_clock::time_point endTime;
    bool active;
    mutex mtx;

public:
    Auction(string itemName, double minP, int durationInSec)
        : item(itemName), minPrice(minP), active(true) {
        endTime = steady_clock::now() + seconds(durationInSec);
    }

    void placeBid(const Bid& b) {
        lock_guard<mutex> lock(mtx);
        if (!active) return;
        if (b.amount >= minPrice) {
            bids.push(b);
        }
    }

    bool isActive() {
        lock_guard<mutex> lock(mtx);
        return active && steady_clock::now() < endTime;
    }

    void closeAuction(ofstream& logFile) {
        lock_guard<mutex> lock(mtx);
        if (!active) return;
        active = false;

        logFile << "Auction ended: " << item << "\n";
        if (!bids.empty()) {
            logFile << "Winner: " << bids.top().bidder << " with bid " << bids.top().amount << "\n";
        }
        else {
            logFile << "No bids placed.\n";
        }
        logFile << "---------------------------\n";
    }

    string getItem() const {
        return item;
    }
};

// =================== AuctionEngine Class ===================
class AuctionEngine {
    unordered_map<string, Auction> auctions;
    mutex engineMutex;
    ofstream logFile;

public:
    AuctionEngine() {
        logFile.open("auction_log.txt", ios::app);
    }

    ~AuctionEngine() {
        logFile.close();
    }

    void createAuction(string item, double minPrice, int durationInSec) {
        lock_guard<mutex> lock(engineMutex);
        auctions.emplace(item, Auction(item, minPrice, durationInSec));
    }

    void placeBid(string item, Bid b) {
        lock_guard<mutex> lock(engineMutex);
        if (auctions.find(item) != auctions.end()) {
            auctions[item].placeBid(b);
        }
    }

    void runScheduler() {
        while (true) {
            this_thread::sleep_for(seconds(5));
            lock_guard<mutex> lock(engineMutex);
            for (auto& pair : auctions) {
                Auction& auc = pair.second;
                if (!auc.isActive()) {
                    auc.closeAuction(logFile);
                }
            }
        }
    }
}; []

// =================== Abstract User Class ===================
class User {
protected:
    string name;
public:
    User(string n) : name(n) {}
    virtual void interact(AuctionEngine& engine) = 0;
    virtual ~User() {}
};

// =================== Buyer Class ===================
class Buyer : public User {
public:
    Buyer(string n) : User(n) {}

    void interact(AuctionEngine& engine) override {
        string item;
        double amount;
        while (true) {
            cout << "Enter item to bid on (or 'exit'): ";
            cin >> item;
            if (item == "exit") break;

            cout << "Enter bid amount: ";
            cin >> amount;

            Bid b{ name, amount, steady_clock::now() };
            engine.placeBid(item, b);
        }
    }
};

// =================== Seller Class ===================
class Seller : public User {
public:
    Seller(string n) : User(n) {}

    void interact(AuctionEngine& engine) override {
        string item;
        double minPrice;
        int duration;

        while (true) {
            cout << "Enter item to auction (or 'exit'): ";
            cin >> item;
            if (item == "exit") break;

            cout << "Enter minimum price: ";
            cin >> minPrice;
            cout << "Enter duration in seconds: ";
            cin >> duration;

            engine.createAuction(item, minPrice, duration);
        }
    }
};

// =================== Main Function ===================
int main() {
    cout << "===== Welcome to Online Auction Platform (OAP_SIM) =====\n";
    cout << "1. Login as Buyer\n2. Login as Seller\n";
    int choice;
    cin >> choice;

    string name;
    cout << "Enter username: ";
    cin >> name;

    User* user = nullptr;
    if (choice == 1) user = new Buyer(name);
    else if (choice == 2) user = new Seller(name);
    else {
        cout << "Invalid choice.\n";
        return 1;
    }

    AuctionEngine engine;
    thread schedulerThread(&AuctionEngine::runScheduler, &engine);

    user->interact(engine);

    schedulerThread.detach(); // background thread keeps checking auctions
    delete user;
    return 0;
}