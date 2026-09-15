class Solution {
public:
    string helper(string str,int& k){
        if(str.size()>=k){
            return str;
        }
        string res="";
        for(auto ch:str){
            char dh;
            if(ch=='z') dh='a';
            else dh=ch+1;
            res+=dh;
        }
        return helper(str+res,k);
    }
    char kthCharacter(int k) {
        string ans=helper("a",k);
        return ans[k-1];
    }
};