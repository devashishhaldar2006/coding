class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        unordered_map<char,int> m;
        for(auto s:allowed){
            m[s]++;
        }
        int cnt=0;
        for(auto s:words){
            bool flag=true;
            for(auto word:s){
                if(m.find(word)==m.end()){
                    flag=false;
                    break;
                }
                
            }
            if(flag) cnt++;

        }
        return cnt;

    }
};