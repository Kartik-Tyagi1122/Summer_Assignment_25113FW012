//PROGRAM TO CHECK PALINDROME USING FUCTION
#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev=0;
    int n1=n;
    while(n){
        int rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    if(rev==n1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
   if(isPalindrome(n)){
    cout<<n<<" is a palindrome number";
   }
   else{
    cout<<n<<" is not a palindrome number";
   }
   return 0;
}