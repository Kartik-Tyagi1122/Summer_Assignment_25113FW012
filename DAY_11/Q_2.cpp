#include<iostream>
using namespace std;


int max(int a,int b){
    if(a>b){
        return a;
    }
    else
    return b;
}
int main(){
    int a;
    int b;
    cout<<"Enter two positive numbers : ";
    cin>>a;
    cin>>b;


    cout<<"The maximum number is : "<<max(a,b);
    return 0;
}