// program to Create library management system.
#include <bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Book b;

            cout << "Enter Book ID: ";
            cin >> b.id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, b.title);

            cout << "Enter Author Name: ";
            getline(cin, b.author);

            b.issued = false;

            books.push_back(b);

            cout << "Book added successfully!\n";
            break;
        }

        case 2: {
            if (books.empty()) {
                cout << "No books available.\n";
            } else {
                cout << "\n----------------------------------------------------------\n";
                cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
                cout << "----------------------------------------------------------\n";

                for (int i = 0; i < books.size(); i++) {
                    cout << books[i].id << "\t"
                         << books[i].title << "\t\t"
                         << books[i].author << "\t\t";

                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << endl;
                }
            }
            break;
        }

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to search: ";
            cin >> id;

            for (int i = 0; i < books.size(); i++) {
                if (books[i].id == id) {
                    cout << "\nBook Found\n";
                    cout << "Book ID : " << books[i].id << endl;
                    cout << "Title   : " << books[i].title << endl;
                    cout << "Author  : " << books[i].author << endl;
                    cout << "Status  : ";

                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to issue: ";
            cin >> id;

            for (int i = 0; i < books.size(); i++) {
                if (books[i].id == id) {

                    if (!books[i].issued) {
                        books[i].issued = true;
                        cout << "Book issued successfully.\n";
                    } else {
                        cout << "Book is already issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to return: ";
            cin >> id;

            for (int i = 0; i < books.size(); i++) {
                if (books[i].id == id) {

                    if (books[i].issued) {
                        books[i].issued = false;
                        cout << "Book returned successfully.\n";
                    } else {
                        cout << "Book was not issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 6:
            cout << "Thank you for using Library Management System!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}