#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
    int n=nums.size();
    int mx=0;
    for(int i=0;i<n;i++){
        if(i>mx) return false;
        mx=max(mx,i+nums[i]);
    }
    return true;
}
int main(){

}