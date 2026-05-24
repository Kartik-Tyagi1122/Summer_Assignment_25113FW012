#include<iostream>
using namespace std;
int reversenumber(int n){
    int rev=0;
    while(n!=0){
        int rem=n%10;
         rev=rem+10*rev;
        n=n/10;
    }
    return rev;
}
int main(){
    int m;
    cin>>m;
    cout<<reversenumber(m);
    return 0;
}