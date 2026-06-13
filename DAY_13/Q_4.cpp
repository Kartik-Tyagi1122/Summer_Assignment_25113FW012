//PROGRAM TO COUNT EVEN AND ODD ELEMENT
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in an array : ";
    cin>>n;
    int arr[n];
    int cnt_even=0;
    int cnt_odd=0;
    cout<<"INPUT " << n <<" ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt_even++;
        }
        else 
        cnt_odd++;
    }
    cout<<"NUMBER OF EVEN ELEMENTS : "<<cnt_even<<endl;
    cout<<"NUMBER OF ODD ELEMENTS : "<<cnt_odd;
    return 0;
}