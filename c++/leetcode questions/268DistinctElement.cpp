#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int i=0;
    while(i<n){
        int correctIdx=nums[i];
        if(i==correctIdx || nums[i]==n) i++;
        else swap(nums[i],nums[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i) return i;
    }
    return n;
}
int main(){
    
}
