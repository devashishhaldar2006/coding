/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v(150,1000);    
        for(int i=0;i<s.length();i++){
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i])) return false;
        }
        for(int i=0;i<150;i++){
            v[i]=1000;
        }
        for(int i=0;i<s.length();i++){
            int idx=(int)t[i];
            if(v[idx]==1000) v[idx]=t[i]-s[i];
            else if(v[idx]!=(t[i]-s[i])) return false;
        }
        return true;
    }
};
// @lc code=end

