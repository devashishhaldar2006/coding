class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans(n);
        stack<int> st;
        ans[n-1]=0;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size() && st.top()>prices[i]) st.pop();
            if(!st.size()) ans[i]=0;
            else ans[i]=st.top();
            st.push(prices[i]);
        }
        for(int i=0;i<n;i++){
            prices[i]-=ans[i];
        }
        return prices;
    }
};
