//create mini library system
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 50;

    int bookID[MAX];
    string title[MAX];
    string author[MAX];

    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    // Input book details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookID[i];
        cin.ignore();

        cout << "Book Title: ";
        getline(cin, title[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);
    }

    // Display all books
    cout << "\n========== Library Records ==========\n";
    cout << "Book ID\tTitle\t\tAuthor\n";

    for (int i = 0; i < n; i++) {
        cout << bookID[i] << "\t"
             << title[i] << "\t\t"
             << author[i] << endl;
    }

    return 0;
}