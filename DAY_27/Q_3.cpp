// program to create salary management system
#include <bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee Record\n";
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

            cout << "Enter Basic Salary: ";
            cin >> e.basicSalary;

            cout << "Enter Bonus: ";
            cin >> e.bonus;

            cout << "Enter Deduction: ";
            cin >> e.deduction;

            e.netSalary = e.basicSalary + e.bonus - e.deduction;

            employees.push_back(e);

            cout << "Salary record added successfully!\n";
            break;
        }

        case 2: {
            if (employees.empty()) {
                cout << "No salary records available.\n";
            } else {
                cout << "\n-------------------------------------------------------------\n";
                cout << "ID\tName\tBasic\tBonus\tDeduction\tNet Salary\n";
                cout << "-------------------------------------------------------------\n";

                for (auto e : employees) {
                    cout << e.id << "\t"
                         << e.name << "\t"
                         << e.basicSalary << "\t"
                         << e.bonus << "\t"
                         << e.deduction << "\t\t"
                         << e.netSalary << endl;
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
                    cout << "Basic Salary: " << e.basicSalary << endl;
                    cout << "Bonus: " << e.bonus << endl;
                    cout << "Deduction: " << e.deduction << endl;
                    cout << "Net Salary: " << e.netSalary << endl;

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
            cout << "Enter Employee ID to update salary: ";
            cin >> id;

            bool found = false;

            for (auto &e : employees) {
                if (e.id == id) {

                    cout << "Enter New Basic Salary: ";
                    cin >> e.basicSalary;

                    cout << "Enter New Bonus: ";
                    cin >> e.bonus;

                    cout << "Enter New Deduction: ";
                    cin >> e.deduction;

                    e.netSalary = e.basicSalary + e.bonus - e.deduction;

                    cout << "Salary updated successfully!\n";
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
                    cout << "Employee record deleted successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 6:
            cout << "Thank you for using Salary Management System!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}