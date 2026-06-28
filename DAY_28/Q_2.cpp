// program to create bank account system
#include <bits/stdc++.h>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Account a;

            cout << "Enter Account Number: ";
            cin >> a.accNo;
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, a.name);

            cout << "Enter Initial Balance: ";
            cin >> a.balance;

            accounts.push_back(a);

            cout << "Account created successfully!\n";
            break;
        }

        case 2: {
            if (accounts.empty()) {
                cout << "No accounts found.\n";
            } else {
                cout << "\n---------------------------------------------\n";
                cout << "Acc No\tName\t\tBalance\n";
                cout << "---------------------------------------------\n";

                for (int i = 0; i < accounts.size(); i++) {
                    cout << accounts[i].accNo << "\t"
                         << accounts[i].name << "\t\t"
                         << accounts[i].balance << endl;
                }
            }
            break;
        }

        case 3: {
            int acc;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accNo == acc) {
                    cout << "\nAccount Found\n";
                    cout << "Account Number : " << accounts[i].accNo << endl;
                    cout << "Name           : " << accounts[i].name << endl;
                    cout << "Balance        : " << accounts[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 4: {
            int acc;
            float amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accNo == acc) {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;

                    accounts[i].balance += amount;

                    cout << "Amount deposited successfully.\n";
                    cout << "Current Balance: " << accounts[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 5: {
            int acc;
            float amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accNo == acc) {

                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;

                    if (amount <= accounts[i].balance) {
                        accounts[i].balance -= amount;
                        cout << "Withdrawal successful.\n";
                        cout << "Remaining Balance: " << accounts[i].balance << endl;
                    } else {
                        cout << "Insufficient Balance!\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 6:
            cout << "Thank you for using Bank Account Management System!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}