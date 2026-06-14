//PROGRAM TO FIND SECOND LARGEST ELEMENT
#include<bits/stdc++.h>
using namespace std;
int main(){
int largest=INT_MIN;
int seclargest=INT_MIN;
int n;
cout<<"Enter size of array : ";
cin>>n;
int arr[n];
cout<<"Input "<<n<<" elements : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        seclargest=largest;
        largest=arr[i];
    }
    else if(arr[i]> seclargest && arr[i]!=largest){
        seclargest=arr[i];
    }
}
    if(seclargest==INT_MIN){
        cout<<"no element found";
    }
    else{
        cout<<"Second largest : "<<seclargest;

    }
    return 0;
}
