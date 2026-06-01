#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int k=2*n-i;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}