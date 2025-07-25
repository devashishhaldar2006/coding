#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool comp(int a,int b){
    return a>b;
}
void nextPermutation(vector<int>& nums){
    int n=nums.size();
    if(n==1) return;
    if(is_sorted(nums.begin(),nums.end(),comp)){
        sort(nums.begin(),nums.end());
        return;
    }
    int i=n-2;
    while(i>0 && nums[i]>=nums[i+1]){
        i--;
    }
    int j=n-1;
    while(nums[j]<nums[i]){
        j--;
    }
    swap(nums[i],nums[j]);
    sort(nums.begin()+i+1,nums.end());
    return;

}
int main(){

}