#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    int k=3;
    int n=q.size();
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
    while(k--){
        q.pop();
    }
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }

    
}