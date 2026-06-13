class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(auto s:magazine){
            m[s]++;
        }
        for(auto s:ransomNote){
            if(m.find(s)==m.end()){
                return false;
            }
            else if(m.find(s)!=m.end()){
                if(m[s]==0) return false;
                m[s]--;
            }
        }
        return true;
    }
};