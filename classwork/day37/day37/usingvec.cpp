#include <iostream>
#include <vector>
#include <string>
using namespace std;

class shop {
private:
    vector<string> itemnames;
    vector<int> quantities;
    vector<float> prices;

public:
   
    shop() {}

    void additems(const string& name, int qty, float price);

    void display();
    void totalcost();
};

void shop::additems(const string& name, int qty, float price) {
    itemnames.push_back(name);
    quantities.push_back(qty);
    prices.push_back(price);
}

void shop::totalcost() {
    float total = 0;
    for (size_t i = 0; i < quantities.size(); ++i) {
        total += quantities[i] * prices[i];
    }
    cout << "Total cost: " << total << endl;
}

void shop::display() {
    for (size_t i = 0; i < itemnames.size(); ++i) {
        cout << "Item: " << itemnames[i]
            << ", Quantity: " << quantities[i]
            << ", Price: " << prices[i]
            << ", Total: " << quantities[i] * prices[i] << endl;
    }
}



int main() {
    shop s;
    s.additems("Biscuits", 2, 5.0);  
    s.display();
    s.totalcost();
    return 0;
}
