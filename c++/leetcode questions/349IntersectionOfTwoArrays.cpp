#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n=nums1.size();
    int m=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>ans;
    unordered_set<int> s;
    int i=0;
    int j=0;
    //two pointer with binary search
    while(i<n && j<m){
        if(nums1[i]==nums2[j]){
            s.insert(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
    }
    for(auto it : s){
        ans.push_back(it);
    }
    return ans;
}
int main(){
    
}