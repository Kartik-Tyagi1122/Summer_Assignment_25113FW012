#include<iostream>
using namespace std;
int fibonacci(int n){
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=2;i<=n;i++){
    //     int temp=a;
    //     a=b;
    //     b=a+temp;
    //      cout<<b<<" ";
    // }
   
    // return 0;
    
    if(n<=1)
        return n;
   
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // int a=0;
    // int b=1;
    // cout<<" Required fibonacci series : "<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
         cout<<fibonacci(i)<<" ";
    }
  
    return 0;
}