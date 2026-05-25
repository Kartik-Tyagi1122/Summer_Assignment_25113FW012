#include<iostream>
using namespace std;
// PROGRAM TO CHECK IF A GIVEN NUMBER IS PRIME OR NOT
int main(){
   
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    if(n<=1){
        cout<<"Not a prime  number";

    }
    else{
        bool isPrime=true;
        for(int i=2;i<n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
               cout<<n<<" is a prime number ";

            }
            else{
              cout<<n<<" is not a prime number";
            }
    
    }
    return 0;

}