/*Bank Account Manager
Store: Name, Account Number, Balance
Allow user to:
Add new account
Display all accounts
Search by account number
Withdraw/Deposit ? Update balance*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Bank {
	string Name;
	string accountNumber;
	int balance;
public:
	Bank(string Name, string accountNumber, int balance) {
		this->Name = Name;
		this->accountNumber = accountNumber;
		this->balance = balance;
	}
	void storeDetails(const string& Name, const string& accountNumber, int balance) {
		ofstream bankDetails("bank.txt", ios::app);
		if (!bankDetails) {
			cout << "It is not opening" << endl;
		}
		else {
			cout << Name << "," << accountNumber << "," << balance;S
		}
		bankDetails.close();
	}
	

};

/*void addNewAccounts(const string& Name, const string& accountNumber) {

}*/
