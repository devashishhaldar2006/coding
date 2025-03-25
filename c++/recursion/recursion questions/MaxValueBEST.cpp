#include<iostream>
#include<string>
using namespace std;
int wmax(int arr[],int n,int idx){
    if(idx==n) return arr[0];
    return max(arr[idx],wmax(arr,n,idx+1));
}
int main(){
    int arr[]={2,3,4,5,6,4,63,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<wmax(arr,n,0);
}