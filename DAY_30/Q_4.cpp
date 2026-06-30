// develop complete mini project using arrays , strings and function
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int empID[MAX];
string empName[MAX];
string department[MAX];
float salary[MAX];
int total = 0;

// Add Employee
void addEmployee() {
    cout << "\nEnter Employee ID: ";
    cin >> empID[total];
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empName[total]);

    cout << "Enter Department: ";
    getline(cin, department[total]);

    cout << "Enter Salary: ";
    cin >> salary[total];

    total++;
    cout << "\nEmployee Added Successfully!\n";
}

// Display Employees
void displayEmployees() {
    if (total == 0) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n-----------------------------------------------------------\n";
    cout << "ID\tName\t\tDepartment\tSalary\n";
    cout << "-----------------------------------------------------------\n";

    for (int i = 0; i < total; i++) {
        cout << empID[i] << "\t"
             << empName[i] << "\t\t"
             << department[i] << "\t\t"
             << salary[i] << endl;
    }
}

// Search Employee
void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (empID[i] == id) {
            cout << "\nEmployee Found\n";
            cout << "ID: " << empID[i] << endl;
            cout << "Name: " << empName[i] << endl;
            cout << "Department: " << department[i] << endl;
            cout << "Salary: " << salary[i] << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Update Salary
void updateSalary() {
    int id;
    cout << "\nEnter Employee ID: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (empID[i] == id) {
            cout << "Enter New Salary: ";
            cin >> salary[i];
            cout << "\nSalary Updated Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Delete Employee
void deleteEmployee() {
    int id;
    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (empID[i] == id) {
            for (int j = i; j < total - 1; j++) {
                empID[j] = empID[j + 1];
                empName[j] = empName[j + 1];
                department[j] = department[j + 1];
                salary[j] = salary[j + 1];
            }
            total--;
            cout << "\nEmployee Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Employee Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateSalary();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}