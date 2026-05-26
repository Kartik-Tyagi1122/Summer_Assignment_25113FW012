#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
bool isStrong(int n){
    int sum=0;
    int temp=n;
    while(temp){
        int rem=temp%10;
        sum+=factorial(rem);
        temp=temp/10;
        
    }
    return sum==n;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
   if(isStrong(n)){
    cout<<"NUMBER IS STRONG";

   }
   else{
    cout<<"NUMBER IS NOT STRONG";
   }
    return 0;
}