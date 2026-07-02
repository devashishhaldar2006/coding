class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int maxLen=INT_MIN;
        string ans="";
        for(int k=0;k<n;k++){
            int i=0,j=k;
            while(j<n){
                int len=0;
                if(i==j) {
                    dp[i][j]=1;
                    len=j-i+1;
                    maxLen=max(maxLen,len);
                    ans=s.substr(i,maxLen);
                }
                else if(j==i+1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        len=j-i+1;
                        maxLen=max(maxLen,len);
                        ans=s.substr(i,maxLen);
                    }
                }
                else{
                    if(s[i]==s[j]){
                        if(dp[i+1][j-1]==1){
                            dp[i][j]=1;
                            len=j-i+1;
                            maxLen=max(maxLen,len);
                            ans=s.substr(i,maxLen);
                        }
                    }
                }
                i++;j++;
            }
        }
        cout<<maxLen;
        return ans;
    }
};