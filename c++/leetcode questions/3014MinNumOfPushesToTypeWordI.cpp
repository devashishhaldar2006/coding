class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        int i=0;
        int n=word.size();
        while(i<n){
            cnt+=(i/8)+1;
            i++;
        }
        return cnt;
    }
};