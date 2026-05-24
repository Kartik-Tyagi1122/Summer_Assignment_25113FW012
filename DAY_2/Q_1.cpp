#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    //n is the number ,sum of whose digits to be find
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
