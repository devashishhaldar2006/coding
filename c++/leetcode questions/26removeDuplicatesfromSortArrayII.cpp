#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return 1;
    int start=2;
    for(int i=2;i<n;i++){
        if(nums[i]!=nums[start-2]){
            nums[start]=nums[i];
            start++;
        }
    }
    return start;
}
int main(){

}