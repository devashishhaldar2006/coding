class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int cnt=0;
        for(int k=0;k<n;k++){
            int i=0,j=k;
            while(j<n){
                if(i==j) {
                    dp[i][j]=1;
                    cnt++;
                }
                else if(j==i+1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        cnt++;
                    }
                }
                else{
                    if(s[i]==s[j]){
                        if(dp[i+1][j-1]==1){
                            dp[i][j]=1;
                            cnt++;
                        }
                    }
                }
                i++;j++;
            }
        }
        return cnt;
    }
};