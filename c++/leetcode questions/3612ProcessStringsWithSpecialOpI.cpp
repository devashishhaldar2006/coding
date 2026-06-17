class Solution {
public:
    string processStr(string s) {
        string res="";
        for(auto ch:s){
            if(isalpha(ch)){
                res+=ch;
            }
            else if(ch=='#'){
                res=res+res;
            }
            else if(ch=='%'){
                reverse(res.begin(),res.end());
            }
            else if(res.size()){
                res.pop_back();
            }
        }
        return res;
    }
};