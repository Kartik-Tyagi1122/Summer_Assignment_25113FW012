//program to create marksheet generation system
#include <bits/stdc++.h>
using namespace std;

struct Student {
    int roll;
    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Marksheet Generation System =====\n";
        cout << "1. Add Student Marksheet\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Student s;

            cout << "Enter Roll Number: ";
            cin >> s.roll;
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, s.name);

            cout << "Enter Marks of 5 Subjects:\n";
            cout << "Subject 1: ";
            cin >> s.m1;
            cout << "Subject 2: ";
            cin >> s.m2;
            cout << "Subject 3: ";
            cin >> s.m3;
            cout << "Subject 4: ";
            cin >> s.m4;
            cout << "Subject 5: ";
            cin >> s.m5;

            s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
            s.percentage = s.total / 5.0;

            if (s.percentage >= 90)
                s.grade = 'A';
            else if (s.percentage >= 75)
                s.grade = 'B';
            else if (s.percentage >= 60)
                s.grade = 'C';
            else if (s.percentage >= 40)
                s.grade = 'D';
            else
                s.grade = 'F';

            students.push_back(s);
            cout << "Marksheet generated successfully!\n";
            break;
        }

        case 2: {
            if (students.empty()) {
                cout << "No records found.\n";
            } else {
                cout << "\n=================================================================\n";
                cout << "Roll\tName\tTotal\tPercentage\tGrade\n";
                cout << "=================================================================\n";

                for (auto s : students) {
                    cout << s.roll << "\t"
                         << s.name << "\t"
                         << s.total << "\t"
                         << s.percentage << "%\t\t"
                         << s.grade << endl;
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
                    cout << "\n----- Student Marksheet -----\n";
                    cout << "Roll Number : " << s.roll << endl;
                    cout << "Name        : " << s.name << endl;
                    cout << "Subject 1   : " << s.m1 << endl;
                    cout << "Subject 2   : " << s.m2 << endl;
                    cout << "Subject 3   : " << s.m3 << endl;
                    cout << "Subject 4   : " << s.m4 << endl;
                    cout << "Subject 5   : " << s.m5 << endl;
                    cout << "Total Marks : " << s.total << endl;
                    cout << "Percentage  : " << s.percentage << "%" << endl;
                    cout << "Grade       : " << s.grade << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;
        }

        case 4:
            cout << "Thank you for using Marksheet Generation System!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}