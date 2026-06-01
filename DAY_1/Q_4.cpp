#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // here n is the number whose digits we have to cout
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    cout<<cnt;
    return 0;

}