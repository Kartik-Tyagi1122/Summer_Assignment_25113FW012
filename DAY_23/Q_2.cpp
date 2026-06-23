// find first repeating character
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;

        if(freq[str[i]] == 2) {
            cout << "First repeating character is: " << str[i] << "\n";
            return 0;
        }
    }

    cout << "No repeating character found.\n";

    return 0;
}