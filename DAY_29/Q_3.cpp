// menu driven string op-system
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, str2;
    int choice;

    do {
        cout << "\n===== MENU DRIVEN STRING OPERATION SYSTEM =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Compare Two Strings\n";
        cout << "8. Concatenate Another String\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {

        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String: " << str << endl;
            break;

        case 3:
            cout << "Length of string = " << str.length() << endl;
            break;

        case 4: {
            string temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;
        }

        case 5: {
            string temp = str;
            for (char &ch : temp)
                ch = toupper(ch);
            cout << "Uppercase String: " << temp << endl;
            break;
        }

        case 6: {
            string temp = str;
            for (char &ch : temp)
                ch = tolower(ch);
            cout << "Lowercase String: " << temp << endl;
            break;
        }

        case 7:
            cout << "Enter another string: ";
            getline(cin, str2);

            if (str == str2)
                cout << "Both strings are Equal.\n";
            else
                cout << "Strings are Not Equal.\n";
            break;

        case 8:
            cout << "Enter another string: ";
            getline(cin, str2);

            cout << "Concatenated String: " << str + str2 << endl;
            break;

        case 9:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 9);

    return 0;
}