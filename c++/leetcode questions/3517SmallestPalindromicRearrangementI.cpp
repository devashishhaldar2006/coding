class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string ans="";
        ans=s.substr(0,n/2);
        sort(ans.begin(),ans.end());
        string t=ans;
        reverse(t.begin(),t.end());
        if(n%2==0){
            return ans+t;
        }
        ans=ans+s[n/2]+t;
        return ans;
    }
};