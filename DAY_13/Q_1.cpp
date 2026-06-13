//PROGRAM TO INPUT AND DISPLAY ARRAY
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in an array : ";
    cin>>n;
    int arr[n];
    cout<<"INPUT " << n <<" ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ARRAY ELEMENTS ARE : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}