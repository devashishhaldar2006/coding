#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={10,20,-4,6,18,2,105,118};
    int k=3;
    priority_queue<int> pq;
    int n=v.size();
    for(int i=0;i<n;i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}