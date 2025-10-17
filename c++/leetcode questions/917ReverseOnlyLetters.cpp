class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            char ch=s[i];
            char dh=s[j];
            if(isalpha(ch) && isalpha(dh)){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isalpha(ch) && !isalpha(dh)){
                j--;
            }
            else if(!isalpha(ch) && isalpha(dh)){
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};