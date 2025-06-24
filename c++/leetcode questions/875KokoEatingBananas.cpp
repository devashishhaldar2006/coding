#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//we can always typecase count into long long for runtime error 
bool check(int speed,vector<int>& piles,int h) {
    int count=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        if(count>h) return false;//but we are using this
        if(speed>=piles[i]) count++;
        else if(piles[i]%speed==0) count+=piles[i]/speed;
        else count+=piles[i]/speed+1;//imp
    }
    if(count>h) return false;
    else return true;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(piles[i]>max) max=piles[i];
    }
    int lo=1;
    int hi=max;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid,piles,h)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;
}
int main(){

}