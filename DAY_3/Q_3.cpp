#include<iostream>
using namespace std;
int findGCD(int a,int b){
    if(b==0){
        return a;
    }
    return findGCD(b,a%b);
}
int main(){
    int a;
    int b;
    
    
    cout<<"Enter the numbers a : ";
    cin>>a;
    cout<<"Enter the numbers b : ";
    cin>>b;
    cout<<findGCD(a,b);
    return 0;
}