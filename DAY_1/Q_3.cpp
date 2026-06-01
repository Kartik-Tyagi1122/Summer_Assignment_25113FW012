#include<bits/stdc++.h>
 using namespace std;
 int factorial(int n){
    if(n==1){
        return 1;

    }
    return n*factorial(n-1);
 }
 //Here m is the given number whose factorial is to be find
 int main(){
    int m;
    cin>>m;
     cout<<factorial(m);
     return 0;

 }