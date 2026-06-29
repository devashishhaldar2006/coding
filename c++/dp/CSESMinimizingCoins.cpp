#include <bits/stdc++.h>
using namespace std;
int helper(int x,vector<int>& coins,vector<int>& dp){
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    int result=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue; 
        result=min(result,helper(x-coins[i],coins,dp));
    }
    if(result==INT_MAX) return dp[x]=INT_MAX;
    return dp[x]=1+result;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int> dp(x+1,-1);
    int ans=helper(x,coins,dp);
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}