#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of rows : ";
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    char ch='A';
    for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
    }
   ch='A';
    for(int j=i-2;j>=0;j--){
        cout<<ch;
        ch++;
        
    }
    cout<<endl;
   }
   return 0;
}