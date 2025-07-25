#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int min_buy=prices[0];
    int ans=0;
    for(int i=1;i<n;i++){
        int profit=prices[i]-min_buy;
        if(profit>ans){
            ans=profit;
        }
        min_buy=min(prices[i],min_buy);
    }
    return ans;

}
int main(){

}