class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto cost:costs){
            if(cost<=coins){
                coins=coins-cost;
                ans++;
            }
            else break;
            
        }
        return ans;
    }
};