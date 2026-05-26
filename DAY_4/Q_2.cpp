#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Nth term of fibonacci is : "<< fibonacci(n);
    return 0;

}