#include<iostream>
using namespace std;
int productOfDigits(int n){
    int product=1;
    while(n){
        int rem=n%10;
        product*=rem;
        n=n/10;
    }
    return product;
}
int main(){
    int m;
    //m is the number whose digit's product is needed
    cin>>m;
    cout<<productOfDigits(m);
    return 0;
}