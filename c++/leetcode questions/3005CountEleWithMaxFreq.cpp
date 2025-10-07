class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto ele:nums){
            m[ele]++;
        }
        int mx=0;
        int total=0;
        for(auto x:m){
            if(x.second>mx){
                mx=x.second;
                total=x.second;
            }
            else if(x.second==mx){
                total+=x.second;
            }
        }
        return total;
    }
};