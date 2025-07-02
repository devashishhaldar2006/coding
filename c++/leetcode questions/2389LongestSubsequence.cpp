#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n=nums.size();
    int m=queries.size();
    vector<int> ans(m);
    sort(nums.begin(),nums.end());
    //nums prefix sum TC=O(n)
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    for(int i=0;i<m;i++){//TC=O(mlogn)
        int maxLen=0;
        //binary search
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>queries[i]) hi=mid-1;
            else{
                maxLen=mid+1;
                lo=mid+1;
            }
        }
        ans[i]=maxLen;
    }
    return ans; //TC=(m+n)logn
}
int main(){
}
