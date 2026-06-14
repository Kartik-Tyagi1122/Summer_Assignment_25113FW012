//PROGRAM FOR LINEAR SEARCH
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
    int m;
    cout<<"Enter element to be searched : ";
    //m is the element whose position to be searched
    int idx=-1;
    cin>>m;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            idx=i;
            break;
        }
       
    }
    if(idx!=-1){
        cout<<"m is found at index : "<<idx;
    }
    else{
        cout<<"m is not found";
    }
    return 0;
}