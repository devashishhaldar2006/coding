class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int maxLen=0;
        for(int i=0;i<n;i++){
            string s=strs[i];
            int len=s.size();
            bool hasAlpha=false;
            for(int j=0;j<s.size();j++){
                if(isalpha(s[j])) hasAlpha=true;
            }
            if(hasAlpha==true) maxLen=max(maxLen,len);
            else{
                int x=stoll(s);
                maxLen=max(maxLen,x);
            }
        }
        return maxLen;
    }
};