#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int helper(int n,vector<int>& dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int result=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        result=(result%MOD+helper(n-i,dp)%MOD)%MOD;
    }
    return dp[n]=result%MOD;
}
int helper2(int n){
    vector<int> dp1(n+1,0);
    dp1[0]=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        long long sum=0;
        for(int j=1;j<=6;j++){
            if(i-j >= 0){
                sum = (sum + dp1[i-j]) % MOD;
            }
        }
        dp1[i]=sum%MOD;
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