class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        for(auto ch:s){
            m[ch]++;
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            if(m.find(ch)!=m.end()){
                m[ch]--;
                if(m[ch]==0) m.erase(ch);
            }
            else return false;
        }
        return m.size()==0 ? true:false;
    }
};