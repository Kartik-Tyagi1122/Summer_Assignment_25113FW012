#include<iostream>
using namespace std;
int rev=0;
int reversenum(int n){
if(n==0){
    return rev;
}
rev=10*rev+n%10;
return reversenum(n/10);
}
int main(){
    int n;
    cout<<"Enter number to be reversed : ";
    cin>>n;
    cout<<"Number after reverse : "<<reversenum(n);
    return 0;
}