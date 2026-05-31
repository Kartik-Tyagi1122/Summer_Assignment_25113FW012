#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows or column : ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || i==n || i==1 || j==n){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
       
    }
     cout<<endl;

  
}
return 0;
}
