// program to create student record management system
#include <bits/stdc++.h>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n Student Record Management System ~~\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Student s;
            cout << "Enter Roll Number: ";
            cin >> s.roll;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s.name);

            cout << "Enter Marks: ";
            cin >> s.marks;

            students.push_back(s);
            cout << "Student record added successfully!\n";
            break;
        }

        case 2: {
            if (students.empty()) {
                cout << "No records found.\n";
            } else {
                cout << "\nStudent Records:\n";
                cout << "---------------------------------\n";
                cout << "Roll\tName\t\tMarks\n";
                cout << "---------------------------------\n";

                for (auto s : students) {
                    cout << s.roll << "\t" << s.name << "\t\t" << s.marks << endl;
                }
            }
            break;
        }

        case 3: {
            int roll;
            cout << "Enter Roll Number to search: ";
            cin >> roll;

            bool found = false;

            for (auto s : students) {
                if (s.roll == roll) {
                    cout << "\nRecord Found:\n";
                    cout << "Roll Number: " << s.roll << endl;
                    cout << "Name: " << s.name << endl;
                    cout << "Marks: " << s.marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;
        }

        case 4: {
            int roll;
            cout << "Enter Roll Number to delete: ";
            cin >> roll;

            bool found = false;

            for (int i = 0; i < students.size(); i++) {
                if (students[i].roll == roll) {
                    students.erase(students.begin() + i);
                    cout << "Record deleted successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}