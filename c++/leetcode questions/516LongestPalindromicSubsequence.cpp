class Solution {
public:
    int helper(string& a,string& b,int i,int j,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j]){
            return dp[i][j]=1 + helper(a,b,i-1,j-1,dp);
        }
        else{
            return dp[i][j]=max(helper(a,b,i-1,j,dp),helper(a,b,i,j-1,dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        string t=s;
        reverse(t.begin(),t.end());
        return helper(s,t,n-1,n-1,dp);
    }
};