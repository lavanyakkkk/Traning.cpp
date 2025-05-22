#include <iostream>
using namespace std;
const int MAX_ITEMS = 500;
struct office_item {
    int id;
    char name[20];
    char category[20];
    int quantity;
};
office_item Inventory[MAX_ITEMS];
int item_count = 0;
void add_item() {
    if (item_count >= MAX_ITEMS) {
        cout << "Inventory is full" << endl;
        return;
    }
    cout << "Enter Item ID: ";
    cin >> Inventory[item_count].id;
    cout << "Enter Name: ";
    cin >> Inventory[item_count].name;
    cout << "Enter Category: ";
    cin >> Inventory[item_count].category;
    cout << "Enter Quantity: ";
    cin >> Inventory[item_count].quantity;
    item_count++;
    cout << "Item added" << endl;
}

void remove_item() {
    int id;
    cout << "Enter ID to remove: ";
    cin >> id;
    for (int i = 0; i < item_count; ++i) {
        if (Inventory[i].id == id) {
            for (int j = i; j < item_count - 1; ++j) {
                Inventory[j] = Inventory[j + 1];
            }
            item_count--;
            cout << "Item removed" << endl;
            return;
        }
    }
    cout << "Item not found" << endl;
}

void update_item() {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;
    for (int i = 0; i < item_count; ++i) {
        if (Inventory[i].id == id) {
            cout << "Enter new name: ";
            cin >> Inventory[i].name;
            cout << "Enter new category: ";
            cin >> Inventory[i].category;
            cout << "Enter new quantity: ";
            cin >> Inventory[i].quantity;
            cout << "Enter new location: ";
            return;
        }
    }
    cout << "Item not found" << endl;
}

void search_item() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (int i = 0; i < item_count; ++i) {
        if (Inventory[i].id == id) {
            cout << "Found: " << endl;
            cout << "ID: " << Inventory[i].id << endl;
            cout << "Name: " << Inventory[i].name << endl;
            cout << "Category: " << Inventory[i].category << endl;
            cout << "Quantity: " << Inventory[i].quantity << endl;
            return;
        }
    }
    cout << "Item not found" << endl;
}

void list_items() {
    if (item_count == 0) {
        cout << "Inventory is empty" << endl;
        return;
    }
    cout << "Inventory List:" << endl;
    for (int i = 0; i < item_count; ++i) {
        cout << "ID: " << Inventory[i].id << endl;
        cout << "Name: " << Inventory[i].name << endl;
        cout << "Category: " << Inventory[i].category << endl;
        cout << "Quantity: " << Inventory[i].quantity << endl;
        cout << "------------------------" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n==== Office Inventory Menu ====" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Remove Item" << endl;
        cout << "3. Update Item" << endl;
        cout << "4. Search Item" << endl;
        cout << "5. List Items" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: add_item(); break;
        case 2: remove_item(); break;
        case 3: update_item(); break;
        case 4: search_item(); break;
        case 5: list_items(); break;
        case 6: cout << "Exit" << endl; break;
        default: cout << "Invalid choice" << endl;
        }

    } while (choice != 6);

    return 0;
}
