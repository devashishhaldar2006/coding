#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int max=arr[0];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}