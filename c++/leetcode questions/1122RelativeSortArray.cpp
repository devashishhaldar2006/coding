class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> freq;
        for(auto ele:arr1){
            freq[ele]++;
        }
        vector<int> ans;
        for(auto itr:arr2){
            while(freq[itr]>0){
                ans.push_back(itr);
                freq[itr]--;
            }
        }
        vector<int> remaining;
        for(auto it : freq) {
            for (int i=0;i<it.second; i++) {
                remaining.push_back(it.first);
            }
        }
        sort(remaining.begin(),remaining.end());
        ans.insert(ans.end(), remaining.begin(), remaining.end());
        return ans;
    }
};