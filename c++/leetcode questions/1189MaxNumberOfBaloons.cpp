class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        unordered_map<char,int> m1;
        for(auto t:text){
            m[t]++;
        }
        return min({m['b'],m['a'],m['l']/ 2,m['o']/ 2,m['n']});
    }
};