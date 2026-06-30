// create mini employee management system
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 50;

    int empID[MAX];
    string empName[MAX];
    string department[MAX];
    float salary[MAX];

    int n;

    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empID[i];
        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, empName[i]);

        cout << "Department: ";
        getline(cin, department[i]);

        cout << "Salary: ";
        cin >> salary[i];
        cin.ignore();
    }

    // Display employee details
    cout << "\n========== Employee Records ==========\n";
    cout << "ID\tName\t\tDepartment\tSalary\n";

    for (int i = 0; i < n; i++) {
        cout << empID[i] << "\t"
             << empName[i] << "\t\t"
             << department[i] << "\t\t"
             << salary[i] << endl;
    }

    return 0;
}