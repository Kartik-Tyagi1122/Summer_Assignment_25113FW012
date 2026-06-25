// program to sort names aplhabatically
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    string names[n];

    cout << "Enter names:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sorting names
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << endl << "Names in Alphabetical Order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}