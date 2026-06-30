// create student record system using arrays and strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 50;

    int rollNo[MAX];
    string name[MAX];
    float marks[MAX];

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Input student details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> rollNo[i];

        cin.ignore(); // Clear input buffer

        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Marks: ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\n===== Student Records =====\n";
    cout << "Roll No\tName\t\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }

    return 0;
}