#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum=INT_MIN;
    int maxIdx=0;
    int sum=0;
    //sliding window algo
    for(int j=0;j<k;j++){
        sum+=arr[j];
    }
    maxSum=sum;
    int i=1;
    int j=k;
    while(j<n){
        sum+=arr[j]-arr[i-1];
        if(maxSum<sum){
            maxSum=sum;
            maxIdx=i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;









    // int maxSum=INT_MIN;
    // int maxIdx=0;
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum+=arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum=sum;
    //         maxIdx=i;
    //     }
    // }
    // cout<<maxSum<<endl;
    // cout<<maxIdx;
}
