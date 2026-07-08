#include<bits/stdc++.h>
using namespace std;
int helper(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i;k<j;k++){
        ans = min(ans,helper(i,k,arr,dp)+ helper(k,j,arr,dp)+arr[i]*arr[k+1]*arr[j+1]);
    }
    return dp[i][j] = ans;
}
int bottomUp(vector<int> &arr){
    int n = arr.size();
    vector<vector<int>> dp(1005,vector<int>(1000,-1));
    for(int len=3;len<=n;len++){
        for(int i=0;i+len-1<n;i++){
            int j=i+len-1;
            dp[i][j] = INT_MAX;
            for(int k=i+1;k<j;k++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j]);
            }
        }
    }
    return dp[0][n-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> dp(1005,vector<int>(1000,-1));
    cout<<helper(0,n-2,arr,dp)<<endl;
    cout<<bottomUp(arr)<<endl;
    return 0;
}