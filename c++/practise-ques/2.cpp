#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        if(pq.size()>=k) pq.pop();
        pq.push(v[i]);
    }
    while(pq.size()){
        int x=pq.top();
        cout<<x<<" ";
        pq.pop();
    }
    return 0;
}