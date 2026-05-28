#include<iostream>
using namespace std;
int countsetbits(int n){
    int cnt=0;
    while(n){
        if(n%2==1){
            cnt++;
        }
        n=n/2;
    }
    return cnt;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<"THE NUMBER IS SET BITS ARE : "<<countsetbits(n);
    return 0;
}