//PROGRAM TO CHECK ARMSTRONG USING FUNCTION
#include<iostream>
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
    int sum=0;
    int temp=n;
    while(temp){
        temp=temp/10;
        cnt++;
    }
    int temp1=n;
    while(temp1){
        int rem=temp1%10;
        sum+=power(rem,cnt);
        temp1=temp1/10;
    }
    return sum==n;

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(isArmstrong(n)){
        cout<<n<<" is a armstrong number";
    }
    else{
        cout<<n<<" is not a armstrong number";
    }
    return 0;
}