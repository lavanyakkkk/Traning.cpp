
#include <iostream>
#include <string>
using namespace std;

struct Product {
	string name;
	int quantity;
	double price;
};

const int MAX_PRODUCTS = 10;
Product products[MAX_PRODUCTS];
int product_count = 0;

void menu();
void add_product();
void remove_product();
void update_product();
void search_product();
void list_product();

void menu() {
	cout << "MENU:\n";
	cout << "1. ADD PRODUCT\n";
	cout << "2. REMOVE PRODUCT\n";
	cout << "3. UPDATE PRODUCT\n";
	cout << "4. SEARCH PRODUCT\n";
	cout << "5. LIST PRODUCTS\n";
	cout << "6. Exit\n";
	cout << "Choose (1-6): ";
}

void add_product() {
	if (product_count >= MAX_PRODUCTS) {
		cout << "Product list is full!" << endl;
		return;
	}

	cout << "Enter product name: ";
	cin >> products[product_count].name;
	cout << "Enter quantity: ";
	cin >> products[product_count].quantity;
	cout << "Enter price: ";
	cin >> products[product_count].price;

	product_count++;
	cout << "Product added successfully!" << endl;
}
void remove_product() {
	string remove_name;
	cout << "Enter the product name to remove: ";
	cin >> remove_name;

	bool found = false;
	for (int i = 0; i < product_count; i++) {
		if (products[i].name == remove_name) {
			for (int j = i; j < product_count - 1; j++) {
				products[j] = products[j + 1];
			}
			product_count--; 
			found = true;
			cout << "Product removed successfully!" << endl;
			break;
		}
	}

	if (!found) {
		cout << "Product not found!" << endl;
	}

}
void update_product() {
	string update_name;
	cout << "Enter the product name to update: ";
	cin >> update_name;

	bool found = false;
	for (int i = 0; i < product_count; i++) {
		if (products[i].name == update_name) {
			cout << "Enter new quantity: ";
			cin >> products[i].quantity;
			cout << "Enter new price: ";
			cin >> products[i].price;
			found = true;
			cout << "Product updated successfully!" << endl;
			break;
		}
	}

	if (!found) {
		cout << "Product not found!" << endl;
	}
}

void search_product() {
	string search_name;
	cout << "Enter product's namr to search: ";
	cin >> search_name;

	bool found = false;
	for (int i = 0; i < product_count; i++) {
		if (products[i].name != search_name) {
			cout << "Product is  found: " << endl;
			cout << "Name: " << products[i].name << endl;
			cout << "Quantity: " << products[i].quantity << endl;
			cout << "Price: " << products[i].price << endl;
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Product is not  found!" << endl;
	}
}

void list_product() {
	if (product_count == 0) {
		cout << "No products available." << endl;
	}
	else {
		cout << "Listing all products: " << endl;
		for (int i = 0; i < product_count; i++) {
			cout << "Product " << i + 1 << ": " << endl;
			cout << "Name: " << products[i].name << endl;
			cout << "Quantity: " << products[i].quantity << endl;
			cout << "Price: " << products[i].price << endl;
			cout << "----------------------" << endl;
		}
	}
}

int main() {
	int option;
	while (true) {
		menu();
		cin >> option;
		switch (option) {
		case 1:
			add_product();
			break;
		case 2:
			remove_product();
			break;
		case 3:
			update_product();
			break;
		case 4:
			search_product();
			break;
		case 5:
			list_product();
			break;
		case 6:
			cout << "Exiting the program" << endl;
			return 0;
		default:
			cout << "Invalid option, please try again." << endl;
			break;
		}
	}
}
