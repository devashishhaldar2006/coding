#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    int start=1;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[start-1]){//start=k
            nums[start]=nums[i];
            start++;
        }
    }
    return start;
}
int main(){

}