#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
int search(vector<int>& nums, int target) {
    int lo=0;
    int hi=nums.size()-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;//lo+(hi-lo)/2 //best code
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int main(){
}