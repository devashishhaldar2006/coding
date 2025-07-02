#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int k=minutes;
    vector<int>& v=customers;
    int n=v.size();
    int prevLoss=0;
    for(int i=0;i<k;i++){
        if(grumpy[i]==1) prevLoss+=v[i];
    }
    int maxLoss=prevLoss;
    int maxIdx=0;
    int i=1;
    int j=k;
    while(j<n){
        int currLoss=prevLoss;
        if(grumpy[j]==1) currLoss+=v[j];
        if(grumpy[i-1]==1) currLoss-=v[i-1];
        if(maxLoss<currLoss){
            maxLoss=currLoss;
            maxIdx=i;
        }
        prevLoss=currLoss;
        i++;
        j++;
    }
    //filling 0's in grumpy array window
    for(int i=maxIdx;i<maxIdx+k;i++){
        grumpy[i]=0;
    }
    //sum of satisfaction
    int sum=0;
    for(int i=0;i<n;i++){
        if(grumpy[i]==0) sum+=v[i];
    }
    return sum;
}
int main(){
    
}
