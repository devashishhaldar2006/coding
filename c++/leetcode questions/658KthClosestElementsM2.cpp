class Solution {
public:
    typedef pair<int,int> pr;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int> ans;
        priority_queue<pr> pq;
        for(auto num:arr){
            int y=abs(num-x);
            pq.push({y,num});
            if(pq.size()>k) {
                pq.pop();
            }
        }
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};