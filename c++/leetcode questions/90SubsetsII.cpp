#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
void helper(vector<int>& nums,vector<int> ans,set<vector<int>>& s,int idx){
    if(idx==nums.size()){
        s.insert(ans);
        return;
    }
    helper(nums,ans,s,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,s,idx+1);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> finalAns;
    set<vector<int>> s;
    sort(nums.begin(),nums.end());
    helper(nums,ans,s,0);
    
    for(auto it : s){
        finalAns.push_back(it);
    }
    
    return finalAns;
}
int main(){
   
}
