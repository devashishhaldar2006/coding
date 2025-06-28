#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cycle sort
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        // add bounds and correctness check
        if(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[correctIdx]){
            swap(arr[i],arr[correctIdx]);
        } else {
            i++;
        }
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
