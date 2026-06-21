class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(auto s:arr){
            string t=s;
            sort(t.begin(),t.end());
            if(m.find(t)!=m.end()){
                m[t].push_back(s);
            }
            else m[t]={s};
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};