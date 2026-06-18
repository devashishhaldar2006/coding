class Solution {
public:
    typedef pair<int,vector<int>> pr;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        vector<vector<int>> ans;
        priority_queue<pr> pq;
        for(auto p:arr){
            int dist=p[0]*p[0] + p[1]*p[1];
            pq.push({dist,p});
            if(pq.size()>k) pq.pop();
        } 
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};