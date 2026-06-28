//program to Create contact management system.
#include <bits/stdc++.h>
using namespace std;

struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};

int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Contact c;

                cout << "Enter Contact ID: ";
                cin >> c.id;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, c.name);

                cout << "Enter Phone Number: ";
                getline(cin, c.phone);

                cout << "Enter Email: ";
                getline(cin, c.email);

                contacts.push_back(c);

                cout << "Contact added successfully!\n";
                break;
            }

            case 2:
            {
                if(contacts.empty())
                {
                    cout << "No contacts available.\n";
                }
                else
                {
                    cout << "\n========================================================\n";
                    cout << "ID\tName\t\tPhone\t\tEmail\n";
                    cout << "========================================================\n";

                    for(int i = 0; i < contacts.size(); i++)
                    {
                        cout << contacts[i].id << "\t"
                             << contacts[i].name << "\t\t"
                             << contacts[i].phone << "\t"
                             << contacts[i].email << endl;
                    }
                }
                break;
            }

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Contact ID to Search: ";
                cin >> id;

                for(int i = 0; i < contacts.size(); i++)
                {
                    if(contacts[i].id == id)
                    {
                        cout << "\nContact Found\n";
                        cout << "ID    : " << contacts[i].id << endl;
                        cout << "Name  : " << contacts[i].name << endl;
                        cout << "Phone : " << contacts[i].phone << endl;
                        cout << "Email : " << contacts[i].email << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact not found.\n";

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "Enter Contact ID to Update: ";
                cin >> id;
                cin.ignore();

                for(int i = 0; i < contacts.size(); i++)
                {
                    if(contacts[i].id == id)
                    {
                        cout << "Enter New Name: ";
                        getline(cin, contacts[i].name);

                        cout << "Enter New Phone Number: ";
                        getline(cin, contacts[i].phone);

                        cout << "Enter New Email: ";
                        getline(cin, contacts[i].email);

                        cout << "Contact updated successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact not found.\n";

                break;
            }

            case 5:
            {
                int id;
                bool found = false;

                cout << "Enter Contact ID to Delete: ";
                cin >> id;

                for(int i = 0; i < contacts.size(); i++)
                {
                    if(contacts[i].id == id)
                    {
                        contacts.erase(contacts.begin() + i);
                        cout << "Contact deleted successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact not found.\n";

                break;
            }

            case 6:
            {
                cout << "Thank you for using Contact Management System!\n";
                break;
            }

            default:
            {
                cout << "Invalid Choice!\n";
            }
        }

    } while(choice != 6);

    return 0;
}