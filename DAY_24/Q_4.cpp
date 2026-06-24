//program to remove duplicate characters
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j < str.length(); j++) {
            if(str[i] == str[j]) {
                str.erase(j, 1);
                j--;
            }
        }
    }

    cout << "String after removing duplicates: " << str << endl;

    return 0;
}

