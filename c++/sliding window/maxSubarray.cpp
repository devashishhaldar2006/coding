#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=0;
    int prevSum=0;
    //sliding window algo
    for(int j=0;j<k;j++){
        prevSum+=arr[j];
    }
    maxSum=prevSum;
    int i=1;
    int j=k;
    while(j<n){
        int currSum=prevSum+arr[j]+arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
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
