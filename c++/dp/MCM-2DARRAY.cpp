#include<bits/stdc++.h>
using namespace std;
int mcm(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i;k<j;k++){
       ans=min(ans,mcm(i,k,arr,dp)+ mcm(k+1,j,arr,dp)+arr[i][0]*arr[k][1]*arr[j][1]);
    }
    return dp[i][j] = ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(2));
    for(int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1];
    vector<vector<int>> dp(1005,vector<int>(1000,-1));
    cout<<mcm(0,n-1,arr,dp)<<endl;
    return 0;
}
