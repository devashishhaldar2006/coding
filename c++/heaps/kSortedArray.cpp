#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={10,20,-4,6,18,2,105,118};
    int k=3;
    priority_queue<int,vector<int>,greater<int>> pq;
    int n=v.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        };
    }
    while(pq.size()){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}