#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>& p1,pair<int,int>& p2){
    double r1=(double)p1.first/p1.second;
    double r2=(double)p2.first/p2.second;
    return r1>r2;
}
int fractionalKnapsack(int W,vector<int>& wt,vector<int>& profit,int n){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({profit[i],wt[i]});
    }
    sort(v.begin(),v.end(),cmp);
    double ans=0.0;
    for(int i=0;i<n;i++){
        if(v[i].second<=W){
            ans+=v[i].first;
            W-=v[i].second;
        } 
        else{
            ans+=(double)(v[i].first/v[i].second)*W;
            break;
        }
    }
    return ans;
}
int main(){
    vector<int> wt={10,20,30};
    vector<int> profit={60,100,120};
    int W=50;
    int n=wt.size();
    cout<<fractionalKnapsack(W,wt,profit,n);
}