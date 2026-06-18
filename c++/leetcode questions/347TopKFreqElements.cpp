class Solution {
public:
    typedef pair<int,int> pr;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto num:nums){
            m[num]++;
        }
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};