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
    int longestCommonSubsequence(string a, string b) {
        int n=a.size();
        int m=b.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string ans="";
        int i=n;
        int j=m;
        while(i>0 and j>0){
            if(a[i-1]==b[j-1]){
                ans+=a[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
        return dp[n][m];
    }
};