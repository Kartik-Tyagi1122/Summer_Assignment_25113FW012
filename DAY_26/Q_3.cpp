// program to create ATM simulation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        cout << "\n ATM Simulation " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if(amount > 0)
                {
                    balance = balance + amount;
                    cout << "Deposit Successful!" << endl;
                    cout << "Updated Balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= 0)
                {
                    cout << "Invalid amount!" << endl;
                }
                else if(amount > balance)
                {
                    cout << "Insufficient Balance!" << endl;
                }
                else
                {
                    balance = balance - amount;
                    cout << "Withdrawal Successful!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while(choice != 4);

    return 0;
}