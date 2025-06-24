#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
bool check(int mid,vector<int>& weights, int days) {
    int n=weights.size();
    int m=mid;
    int count=1;
    for(int i=0;i<n;i++){
        if(m>=weights[i]){
            m-=weights[i];
        }
        else{
            count++;
            m=mid;
            m-=weights[i];
        }
    }
    if(count>days) return false;
    else return true;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();
    int lo=weights[0];
    int hi=0;
    for(int i=0;i<n;i++){
        hi+=weights[i];
        if(weights[i]>lo){
            lo=weights[i];
        }
    }
    int minCapacity=hi;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid,weights,days)){
            hi=mid-1;
            minCapacity=mid;
        }
        else lo=mid+1;
    }
    return minCapacity;
}
int main(){

}