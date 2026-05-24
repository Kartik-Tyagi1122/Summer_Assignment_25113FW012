#include<iostream>
using namespace std;
int isPalindrome(int n){
    int rev=0;
    int n1=n;
    while(n>0){
        int rem=n%10;
        rev=rem+10*rev;
        n=n/10;
    }
    if(n1==rev){
       cout<<"Palindrome";
    }
    else {
       cout<<"Not Palindrome";
    }
    return 0;
   
}
int main(){
    int m;
    cin>>m;
    isPalindrome(m);
    return 0;

}