#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; //maxHeap
    pq.push(23);
    pq.push(25);
    pq.push(3);
    pq.push(2);
    pq.push(-1);
    pq.push(10);
    pq.pop();
    cout<<pq.top()<<endl;
    
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(-122);
    pq1.push(-200);
    pq1.push(20);
    pq1.push(56);
    cout<<pq1.top()<<endl;
}