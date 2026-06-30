#include<bits/stdc++.h>
using namespace std;
int profit(int i,vector<int>& wt,vector<int>& val,int W,vector<vector<int>>& dp){
    if(i==wt.size()) return 0;
    if(dp[i][W]!=-1) return dp[i][W];
    int skip=profit(i+1,wt,val,W,dp);
    if(W<wt[i]) return dp[i][W]=skip;
    int take=val[i]+profit(i+1,wt,val,W-wt[i],dp);
    return dp[i][W]=max(take,skip);
}
int main(){
    vector<int> wt={1,2,8,10};
    vector<int> val={5,3,9,6};
    int W=8;
    vector<vector<int>> dp(wt.size()+1,vector<int>(W+1,-1));
    cout<<profit(0,wt,val,W,dp);
}