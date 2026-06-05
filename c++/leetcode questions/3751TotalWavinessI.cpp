class Solution {
public:
    int checkPeak(string s){
        int peak=0;
        for(int i=1;i<s.size()-1;i++){
            int curr=s[i]-'0';
            int prev=s[i-1]-'0';
            int nxt=s[i+1]-'0';
            if(curr>prev && curr>nxt){
                peak++;
            }
        }
        return peak;
    }
    int checkValley(string s){
        int valley=0;
        for(int i=1;i<s.size()-1;i++){
            int curr=s[i]-'0';
            int prev=s[i-1]-'0';
            int nxt=s[i+1]-'0';
            if(curr<prev && curr<nxt){
                valley++;
            }
        }
        return valley;
    }
    int total(int n){
        int ans=0;
        string s=to_string(n);
        if(s.size()<3){
            return 0;
        }
        else{
            ans+=checkPeak(s);
            ans+=checkValley(s);
        }
        return ans;
    }
    int totalWaviness(int num1, int num2) {
        int t=0;
        for(int i=num1;i<=num2;i++){
            t+=total(i);
        }
        return t;
    }
};