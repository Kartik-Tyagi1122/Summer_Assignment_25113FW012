//PROGRAM TO FIND FREQUENCY OF AN ELEMENT
#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Input "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the element ehose freq to be find : ";
    cin>>m;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            cnt++;
        }
    }
    cout<<"freq of the given element is : "<<cnt;
    return 0;
}