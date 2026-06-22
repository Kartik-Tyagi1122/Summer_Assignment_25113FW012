// count words in a sentence
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int words = 0;

    cout << "Enter a sentence : ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }

    words = words + 1;

    cout << "Number of words = " << words << endl;

    return 0;
}