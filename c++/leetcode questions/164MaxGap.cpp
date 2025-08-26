#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;
int maximumGap(vector<int>& nums) {
    int n=nums.size();
    if(n<2) return 0;
    sort(nums.begin(),nums.end());
    int dist=INT_MIN;
    for(int i=1;i<n;i++){
        int diff=nums[i]-nums[i-1];
        if(dist<diff){
            dist=diff;
        }
    }
    return dist;
}
int main(){
   
}
