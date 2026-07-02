class Solution {
public:
    string longestCommonSubsequence(string a, string b) {
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
        return ans;
    }
    string shortestCommonSupersequence(string a, string b) {
        int n=a.size();
        int m=b.size();
        string lcs=longestCommonSubsequence(a,b);
        int i=0;
        int j=0;
        int k=0;
        string ans="";
        while(i<n && j<m && k<lcs.size()){
            while(a[i]!=lcs[k]){
                ans+=a[i];
                i++;
            }
            while(b[j]!=lcs[k]){
                ans+=b[j];
                j++;
            }
            ans+=lcs[k];
            i++;
            j++;
            k++;
        }
        while(i<n){
            ans+=a[i];
            i++;
        }
        while(j<m){
            ans+=b[j];
            j++;
        }
        return ans;
    }
};