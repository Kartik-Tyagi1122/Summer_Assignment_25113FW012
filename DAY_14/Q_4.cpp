//progrm to find duplicates
#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> freq;
for(int i=0;i<n;i++){
    freq[arr[i]]++;
}
cout<<"Duplicate elements : ";
for(auto it : freq){
    if(it.second>1){
        cout<<it.first<<" ";
    }
}
return 0;

}