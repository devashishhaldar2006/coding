class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> m;
        int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        while(j<n) {
            m[s[j]]++;
            while(m['a'] && m['b'] && m['c']) {
                ans+=(n-j);
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};