//program to find missing number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int totalSum = (n + 1) * (n + 2) / 2;

    cout << "Missing number is: " << totalSum - sum;

    return 0;
}