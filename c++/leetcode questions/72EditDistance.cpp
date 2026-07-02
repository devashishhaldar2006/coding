class Solution {
public:
    int helper(string& a,string& b,int i,int j,vector<vector<int>>& dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j]){
            return dp[i][j]=helper(a,b,i-1,j-1,dp);
        }
        else{
            int del=1+helper(a,b,i-1,j,dp);
            int ins=1+helper(a,b,i,j-1,dp);
            int rep=1+helper(a,b,i-1,j-1,dp);
            return dp[i][j]=min({del,ins,rep});
        }
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        int ans=helper(word1,word2,n-1,m-1,dp);
        return ans;
    }
};