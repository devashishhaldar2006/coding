#include <bits/stdc++.h>
using namespace std;
#define inf INT_MAX
int helper(int n, vector<int> &dp){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=1+min({helper(n-1,dp),(n%2==0) ?helper(n/2,dp): inf,(n%3==0)? helper(n/3,dp): inf});
}
int helper2(int n){
    vector<int> dp(n+1,-1);
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i]=1+min({dp[i-1],(i%2==0) ?(dp[i/2]): inf,(i%3==0)? (dp[i/3]): inf});
    }
    return dp[n];
}
int main(){
    int n=9;
    vector<int> dp(1005,-1);
    int ans=helper(n,dp);
    cout<<ans<<endl;
    cout<<helper2(n)<<endl;
}