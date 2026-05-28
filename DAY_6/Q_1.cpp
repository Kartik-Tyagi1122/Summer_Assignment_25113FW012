#include<iostream>
using namespace std;
int dectobin(int n){
int rem,pow=1,ans=0;
  
    while(n!=0){
        rem=n%2;
        n=n/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter decimal number : ";
    cin>>n;
    cout<<dectobin(n);
    return 0;
}