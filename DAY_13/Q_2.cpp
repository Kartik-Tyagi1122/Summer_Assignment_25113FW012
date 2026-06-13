//PROGRAM TO FIND AVERAGE AND SUM
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
   
    cout<<"Enter number of elements in an array : ";
    cin>>n;
    int arr[n];
    cout<<"INPUT "<<n<<" ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    
   float avg=(float)sum/n;
    cout<<"SUM OF THE ELEMENTS OF THE ARRAY :"<<sum<<endl;
    cout<<"AVERAGE OF THE ELEMENTS OF THE ARRAY IS : "<<avg;
    return 0;
}
