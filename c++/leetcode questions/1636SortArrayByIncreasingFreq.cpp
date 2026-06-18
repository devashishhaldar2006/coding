class Solution {
public:
    typedef pair<int,int> pr;
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (auto num : nums) {
            m[num]++;
        }
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        for(auto x:m){
            pq.push({x.second,-x.first});
        }
        while(pq.size()){
            while(true) {
                ans.push_back(-pq.top().second);
                m[-pq.top().second]--;
                if(m[-pq.top().second]==0){
                    m.erase(-pq.top().second);
                    break;
                }
            }
            pq.pop();
        }
        return ans;
    }
};