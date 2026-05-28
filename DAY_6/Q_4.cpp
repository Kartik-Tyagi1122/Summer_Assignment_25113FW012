#include<iostream>
using namespace std;
int findPower(int base,int exp){
    int result=1;
    for(int i=0;i<exp;i++){
      result*=base;
    }
    return result;

}
int main(){
    int n;
    int m;
    cout<<"ENTER THE BASE NUMBER : ";
    cin>>n;
    cout<<"ENTER THE POWER : ";
    cin>>m;
    cout<<findPower(n,m);
    return 0;

}