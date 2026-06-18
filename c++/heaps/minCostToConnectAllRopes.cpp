#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={10,20,-4,6,18,2,105,118};
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> ans;
    for(auto x:v){
        pq.push(x);
    }
    int cost=0;
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        cost+=x+y;
        pq.push(x+y);
    }
    cout<<cost<<endl;
}