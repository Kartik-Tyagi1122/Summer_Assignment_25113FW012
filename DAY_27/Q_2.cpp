// program to create employee management system
#include <bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Employee e;

            cout << "Enter Employee ID: ";
            cin >> e.id;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, e.name);

            cout << "Enter Department: ";
            getline(cin, e.department);

            cout << "Enter Salary: ";
            cin >> e.salary;

            employees.push_back(e);
            cout << "Employee added successfully!\n";
            break;
        }

        case 2: {
            if (employees.empty()) {
                cout << "No employee records found.\n";
            } else {
                cout << "\n-----------------------------------------------\n";
                cout << "ID\tName\t\tDepartment\tSalary\n";
                cout << "-----------------------------------------------\n";

                for (auto e : employees) {
                    cout << e.id << "\t"
                         << e.name << "\t\t"
                         << e.department << "\t\t"
                         << e.salary << endl;
                }
            }
            break;
        }

        case 3: {
            int id;
            cout << "Enter Employee ID to search: ";
            cin >> id;

            bool found = false;

            for (auto e : employees) {
                if (e.id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID: " << e.id << endl;
                    cout << "Name: " << e.name << endl;
                    cout << "Department: " << e.department << endl;
                    cout << "Salary: " << e.salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 4: {
            int id;
            cout << "Enter Employee ID to update: ";
            cin >> id;

            bool found = false;

            for (auto &e : employees) {
                if (e.id == id) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, e.name);

                    cout << "Enter New Department: ";
                    getline(cin, e.department);

                    cout << "Enter New Salary: ";
                    cin >> e.salary;

                    cout << "Employee record updated successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 5: {
            int id;
            cout << "Enter Employee ID to delete: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {
                    employees.erase(employees.begin() + i);
                    cout << "Employee deleted successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 6:
            cout << "Exiting Employee Management System...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}