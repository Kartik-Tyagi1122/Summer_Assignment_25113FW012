#include<iostream>
using namespace std;
//PROGRAM TO PRINT PRIME NUMBERS IN A RANGE
int main(){
    int left;
    int right;
    cout<<"Enter the initial left number : ";
    cin>>left;
    cout<<"Enter the last number : ";
    cin>>right;
    cout<<"Prime numbers are : ";
    for(int i=left;i<=right;i++){
        if(i<=1){
            continue;
        }
        bool isPrime=true;
        for(int j=2;j<i;j++){
          if(i%j==0){
            isPrime=false;
            break;

          }

        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
return 0;
}