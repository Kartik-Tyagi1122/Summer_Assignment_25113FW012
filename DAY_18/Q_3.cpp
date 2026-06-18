//binary search
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size for array : ";
    cin >> n;

    int arr[n];
cout<<"Enter elements for array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout<<"Enter the element to find : ";
    cin >> x;

    int start = 0;
    int end = n - 1;

    while(start <= end) {
       int mid = start + (end - start) / 2;

        if(arr[mid] == x) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}