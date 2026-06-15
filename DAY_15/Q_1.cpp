//program to reverse an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0, end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}