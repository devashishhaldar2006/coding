#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int pivot=-1;//smallest element
        if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
            else return -1;
        }
        //finding pivot element
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi=mid-1;
            else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                pivot=mid;
                break;
            } 
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                pivot=mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            // if(nums[mid]<nums[hi]) hi=mid-1;
            else hi=mid-1;
        }
        if(pivot==-1){//already sorted array no rotations
            lo=0;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
            return -1;
        }
        if(target>=nums[0] && target<=nums[pivot-1]){
            lo=0;
            hi=pivot-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
        }
        else {
            lo=pivot;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
        }
        return -1;
    }
int main(){
    vector<int> v = {0, 1, 2, 4, 3, 1, 0};
    cout<<search(v,5);
}

