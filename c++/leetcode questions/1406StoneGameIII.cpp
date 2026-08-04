class Solution {
public:
    long long helper(vector<int>& arr,long long i,vector<long long>& dp){
        long long n=arr.size();
        if(i>=n) return 0;
        if(dp[i]!=LLONG_MIN) return dp[i];
        long long ans=arr[i]-helper(arr,i+1,dp);
        if(i+1<n) ans=max(ans,(long long)arr[i]+arr[i+1]-helper(arr,i+2,dp));
        if(i+2<n) ans=max(ans,(long long)arr[i]+arr[i+1]+arr[i+2]-helper(arr,i+3,dp));
        return dp[i]=ans;
    }
    string stoneGameIII(vector<int>& arr) {
        long long n=arr.size();
        vector<long long> dp(n,LLONG_MIN);
        long long ans=helper(arr,0,dp);
        if(ans==0) return "Tie";
        else if(ans>0) return "Alice";
        else return "Bob";
    }
};