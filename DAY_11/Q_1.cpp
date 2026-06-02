#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the numbers a and b respectively : ";
    cin>>a;
    cin>>b;
    cout<<sum(a,b);
    return 0;
}