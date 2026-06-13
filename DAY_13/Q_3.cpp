//PROGRAM TOFIND LARGEST AND SMALLEST ELEMENT
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int largest=INT_MIN;
    int smallest=INT_MAX;
    cout<<"Enter number of elements in an array : ";
    cin>>n;
    int arr[n];
    cout<<"INPUT "<<n<<" ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        
    }
    cout<<"LARGEST ELEMENT : "<<largest<<endl;
    cout<<"SMALLEST ELEMENT : "<<smallest;
    return 0;
}