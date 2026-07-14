class Solution {
public:
    typedef long long ll;
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        // calculating maximum of subarrays
        vector<int> nge(n);
        ll ans=0;
        stack<int> st;;
        nge[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size() and nums[st.top()]<nums[i]) st.pop();
            if(!st.size()) nge[i]=n;
            else nge[i]=st.top();
            st.push(i);
        }
        vector<int>  pge(n);
        stack<int> gt;
        pge[0]=-1;
        gt.push(0);
        for(int i=1;i<n;i++){
            while(gt.size() and nums[gt.top()]<=nums[i]) gt.pop();
            if(!gt.size()) pge[i]=-1;
            else pge[i]=gt.top();
            gt.push(i);
        }
        ll left=0,right=0;
        for(int i=0;i<n;i++){
            left=i-pge[i];
            right=nge[i]-i;
            // adding maximum
            ans+=nums[i]*left*right;
        }
        // calculating minimum of subarrays
        vector<int> nse(n);
        stack<int> mt;
        nse[n-1]=n;
        mt.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(mt.size() and nums[mt.top()]>nums[i]) mt.pop();
            if(!mt.size()) nse[i]=n;
            else nse[i]=mt.top();
            mt.push(i);
        }
        vector<int>  pse(n);
        stack<int> kt;
        pse[0]=-1;
        kt.push(0);
        for(int i=1;i<n;i++){
            while(kt.size() and nums[kt.top()]>=nums[i]) kt.pop();
            if(!kt.size()) pse[i]=-1;
            else pse[i]=kt.top();
            kt.push(i);
        }
        left=0,right=0;
        for(int i=0;i<n;i++){
            left=i-pse[i];
            right=nse[i]-i;
            // subtracting min
            ans-=nums[i]*left*right;
        }
        return ans;
    }
};