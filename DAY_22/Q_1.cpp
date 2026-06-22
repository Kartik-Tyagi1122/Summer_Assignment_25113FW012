// check palindrome string
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string : ";
    cin.getline(str, 100);

    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    bool palindrome = true;

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is Not Palindrome" << endl;

    return 0;
}