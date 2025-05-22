
#include <iostream>
#include <cstring>  // For strcpy
using namespace std;

class BankAtm {
private:
    char accountName[20];
    int balance;
    int accountNum;

public:
    // Setters and Getters
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }

    void setAccountName(const char* a) {
        strcpy(accountName, a);
    }

    const char* getAccountName() {
        return accountName;
    }

    void setAccountNum(int n) {
        accountNum = n;
    }

    int getAccountNum() {
        return accountNum;
    }

    // Function to display account details
    void bankDetails() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNum << endl;
        cout << "Account Name: " << accountName << endl;
        cout << "Balance: " << balance << endl;
    }

    // Deposit function
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New balance: " << balance << endl;
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient funds to withdraw " << amount << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrew " << amount << ". Remaining balance: " << balance << endl;
        }
    }
};

// Driver function (Main function)
int main() {
    BankAtm atm;  // Create an object of BankAtm class

    int accountNum, initialBalance, depositAmount, withdrawAmount;
    char accountName[20];

    // Input account number as a string and then convert to integer
    char accountNumStr[20];
    cout << "Enter account number: ";
    cin.getline(accountNumStr, 20);  // Read account number as string
    accountNum = atoi(accountNumStr);  // Convert string to integer
    atm.setAccountNum(accountNum);

    // Input account holder's name
    cout << "Enter account holder's name: ";
    cin.getline(accountName, 20);  // Read account name with spaces
    atm.setAccountName(accountName);

    // Input initial balance
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    atm.setBalance(initialBalance);

    // Display account details
    atm.bankDetails();

    // Deposit and withdraw transactions
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    atm.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    atm.withdraw(withdrawAmount);

    // Display updated account details
    atm.bankDetails();

    return 0;
}
