// progrm to intersection of array
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection: ";

    for(int i = 0; i < n1; i++) {
        bool found = false;

        // Check if arr1[i] exists in arr2
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                arr2[j] = -1;  // Mark as used
                break;
            }
        }

        if(found) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}