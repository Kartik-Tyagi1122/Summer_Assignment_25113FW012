// create inventory management system
#include <bits/stdc++.h>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    vector<Product> inventory;
    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product Quantity\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            Product p;
            cout << "Enter Product ID: ";
            cin >> p.id;

            cin.ignore();
            cout << "Enter Product Name: ";
            getline(cin, p.name);

            cout << "Enter Quantity: ";
            cin >> p.quantity;

            cout << "Enter Price: ";
            cin >> p.price;

            inventory.push_back(p);
            cout << "Product added successfully.\n";
            break;
        }

        case 2:
            if (inventory.empty()) {
                cout << "Inventory is empty.\n";
            } else {
                cout << "\nID\tName\t\tQty\tPrice\n";
                for (auto p : inventory) {
                    cout << p.id << "\t"
                         << p.name << "\t\t"
                         << p.quantity << "\t"
                         << p.price << endl;
                }
            }
            break;

        case 3: {
            int id;
            cout << "Enter Product ID to search: ";
            cin >> id;

            bool found = false;
            for (auto p : inventory) {
                if (p.id == id) {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << p.id << endl;
                    cout << "Name: " << p.name << endl;
                    cout << "Quantity: " << p.quantity << endl;
                    cout << "Price: " << p.price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;
        }

        case 4: {
            int id;
            cout << "Enter Product ID: ";
            cin >> id;

            bool found = false;
            for (auto &p : inventory) {
                if (p.id == id) {
                    cout << "Enter New Quantity: ";
                    cin >> p.quantity;
                    cout << "Quantity updated successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;
        }

        case 5: {
            int id;
            cout << "Enter Product ID to delete: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i].id == id) {
                    inventory.erase(inventory.begin() + i);
                    cout << "Product deleted successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;
        }

        case 6:
            cout << "Exiting Inventory Management System...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}