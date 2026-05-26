#include<iostream>
using namespace std;
// TO PRINT greatest Prime FACTORS OF A NUMBER
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int greatest=1;
    for(int i=1;i<=n;i++){
        if(n%i==0 && isPrime(i)){
         greatest=i;
        }
    }
    cout<<"GREATEST PRIME FACTOR IS : "<<greatest;
    return 0;
}