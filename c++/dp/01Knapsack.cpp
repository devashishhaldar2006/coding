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
int helper(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            int skip = dp[i - 1][j];
            if (wt[i - 1] > j)
                dp[i][j] = skip;
            else {
                int take = val[i - 1] + dp[i][j - wt[i - 1]];
                dp[i][j] = max(take, skip);
            }
        }
    }

    return dp[n][W];
}
int main(){
    vector<int> wt={1,2,8,10};
    vector<int> val={5,3,9,6};
    int W=8;
    vector<vector<int>> dp(wt.size()+1,vector<int>(W+1,-1));
    cout<<profit(0,wt,val,W,dp);
    cout<<endl;
    cout<<helper(wt,val,W);
}