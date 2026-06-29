// creatw menu driven array op-system
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, value, pos;

    do {
        cout << "\n===== MENU DRIVEN ARRAY OPERATION SYSTEM =====\n";
        cout << "1. Insert Element\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Update Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Find Maximum\n";
        cout << "7. Find Minimum\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter element to insert: ";
            cin >> value;
            arr[n] = value;
            n++;
            cout << "Element inserted successfully.\n";
            break;

        case 2:
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> value;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (arr[i] == value) {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Element not found.\n";
            break;

        case 4:
            cout << "Enter index to update: ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                cout << "Enter new value: ";
                cin >> value;
                arr[pos] = value;
                cout << "Element updated successfully.\n";
            } else {
                cout << "Invalid index.\n";
            }
            break;

        case 5:
            cout << "Enter index to delete: ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                cout << "Element deleted successfully.\n";
            } else {
                cout << "Invalid index.\n";
            }
            break;

        case 6:
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                int maxi = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > maxi)
                        maxi = arr[i];

                cout << "Maximum Element = " << maxi << endl;
            }
            break;

        case 7:
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                int mini = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < mini)
                        mini = arr[i];

                cout << "Minimum Element = " << mini << endl;
            }
            break;

        case 8:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 8);

    return 0;
}