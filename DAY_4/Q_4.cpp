#include<bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int res = 1;
    for(int i = 0; i < exp; i++){
        res *= base;
    }
    return res;
}
bool isArmstrong(int n){
    int cnt=0;
    int n1=n;
    int sum=0;
    while(n){
      n=n/10;
      cnt++;
    }
    int n2=n1;
    while(n1){
        int rem=n1%10;
        sum+=power(rem,cnt);
        n1=n1/10;
    }
    return sum==n2;

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isArmstrong(i)){
            cout<<i<<endl;
        }

    }
    return 0;
}