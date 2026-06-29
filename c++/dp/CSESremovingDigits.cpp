#include <bits/stdc++.h>
using namespace std;
vector<int> digit(int n){
    vector<int> ans;
    while(n){
        ans.push_back(n%10);
        n/=10;
    }
    return ans;
    
}
int helper(int n,vector<int>& dp){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> d=digit(n);
    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        if(d[i] == 0) continue;
        result=min(result,helper(n-d[i],dp));
    }
    return dp[n]=1+result;
}
int helper2(int n){
    vector<int> dp1(n+1,-1);
    dp1[0]=0;
    for(int i=1;i<=9;i++) dp1[i]=1;
    
    for(int i=10;i<=n;i++){
        vector<int> d=digit(i);
        int result=INT_MAX;
        for(int j=0;j<d.size();j++){
            if(d[j]==0) continue;
            result=min(result,dp1[i-d[j]]);
        }
        dp1[i]=1+result;
    }
    return dp1[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<helper(n,dp)<<endl;
    cout<<helper2(n)<<endl;
}


