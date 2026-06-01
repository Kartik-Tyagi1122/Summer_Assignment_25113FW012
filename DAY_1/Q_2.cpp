#include<bits/stdc++.h>
 using namespace std;
 void printtable(int n){
    
    for(int i=1;i<=10;i++){
       int table=i*n;
     cout<<table<<endl;
    }
  
    
 }
 //here m is the number whose table is to be printed
 int main(){
    int m;
    cin>>m;
    printtable(m);
    return 0;
 }