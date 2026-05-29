#include<iostream>
using namespace std;
int sum=0;
int sumOfDigits(int n){
    if(n==0){
        return sum;
    }
    sum+=n%10;
    return sumOfDigits(n/10);
}
int main(){
    int n;
    cout<<"Enter th number : ";
    cin>>n;
    cout<<"Sum of digits is : "<<sumOfDigits(n);
    return 0;
}