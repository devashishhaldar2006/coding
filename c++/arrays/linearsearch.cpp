#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target element:";
    cin>>target;
    bool flag=false;
    int p=0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            flag=true;
            p=i;
        }
    }
    if(flag==true) cout<<"element found and index is "<<p;
    else cout<<"not found";
    
}