// progrm for character freq..
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string : ";
    cin.getline(str, 100);

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    cout << "Character Frequencies :" << endl;

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] != 0) {
            cout << str[i] << " = " << freq[str[i]] << endl;
            freq[str[i]] = 0;   
        }
    }

    return 0;
}