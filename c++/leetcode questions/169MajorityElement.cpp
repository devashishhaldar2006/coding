#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[(nums.size())/2];
}

int main(){
    
}