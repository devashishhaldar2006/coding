#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
int search(vector<int>& nums, int target) {
    int lo=0;
    int hi=nums.size()-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2; //best code
        if(nums[mid]==target) {
            flag=true;
            return nums[mid+1];
        }
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) return nums[lo];
}
int main(){
    vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    cout<<search(v,12);
}