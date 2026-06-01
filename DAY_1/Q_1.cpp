#include<bits/stdc++.h>
 using namespace std;
 int sum(int n){
   
    int initialsum=0;
   
    for(int i=1;i<=n;i++){
    initialsum+=i;
    }
   
    return initialsum;

 }
 //where n is the first n natural number whose sum we have to find
 int main(){
    int m;
    cin>>m;
   cout<<sum(m);
    return 0;
 }
