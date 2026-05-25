#include<iostream>
using namespace std;
// fn to find gcd 
int findGCD(int a,int b){
    if(b==0){
        return a;
    }
    return findGCD(b,a%b);
}
// fn to find lcm
int findLCM(int a,int b){
    return (a*b)/findGCD(a,b);
}
int main(){
    int a;
    int b;
    cout<<"Enter number a : ";
    cin>>a;
    cout<<"Enter number b : ";
    cin>>b;
    cout<<findLCM(a,b);
    return 0;

}