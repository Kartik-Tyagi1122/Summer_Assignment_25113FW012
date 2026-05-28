#include<bits/stdc++.h>
using namespace std;
int bintodec(int n){
    int ans=0;
    int exp=0;
    while(n){
        int rem=n%10;
        ans=ans+ rem*pow(2,exp);
        exp++;
        n=n/10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"ENTER  BINARY NUMBER : ";
    cin>>n;
    cout<<"YOUR RESULTANT DECIMAL NUMBER IS : "<<bintodec(n);
    return 0;
}