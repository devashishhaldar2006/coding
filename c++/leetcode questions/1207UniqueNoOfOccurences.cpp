class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto ele:arr){
            m[ele]++;
        }
        unordered_set<int> s;
        for(auto x:m){
            if(s.find(x.second)!=s.end()){
                return false;
            }
            else s.insert(x.second);
        }
        return true;
    }
};