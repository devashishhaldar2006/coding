#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    int n=nums.size();
    int flips=0;
    int i=0,j=0;
    int maxLen=INT_MIN;
    int len=0;
    while(j<n){
        if(nums[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                len=j-i;
                maxLen=max(len,maxLen);
                while(nums[i]==1) i++;//nums[i]==0
                i++;
                j++;
            }
            
        }
    }
    len=j-i;
    maxLen=max(len,maxLen);
    return maxLen;
}
int main(){

}
