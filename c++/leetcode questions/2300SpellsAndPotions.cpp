class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        long long n=spells.size();
        long long m=potions.size();
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(long long k=0;k<n;k++) {  
            long long lo=0; 
            long long hi=m-1; 
            long long res=m;
            while(lo<=hi) {
                long long mid=lo+(hi-lo)/2;
                if((long long)spells[k]*potions[mid]>=success) {
                    res=mid;
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
            ans.push_back(m-res);
        }
        return ans;
    }
};
