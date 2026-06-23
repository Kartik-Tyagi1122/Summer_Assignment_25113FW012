//find maxumim occuring character 
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
    }

    char maxChar;
    int maxFreq = 0;

    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] > maxFreq) {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << "\n";
    cout << "Frequency: " << maxFreq << "\n";

    return 0;
}