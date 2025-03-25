#include<iostream>
#include<string>
using namespace std;
void wmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(arr[idx]>arr[idx+1]) max=arr[idx];
    wmax(arr,n,idx+1,max);
}
int main(){
    int arr[]={2,3,4,5,6,4,63,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    wmax(arr,n,0,arr[0]);
}