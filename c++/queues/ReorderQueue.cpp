#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reorder(queue<int>& q){
    stack<int> st;
    int n=q.size();
    // pop 1st half of the q to the st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // empty the st into q
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    // pop 1st half of the q to the st(now the second half)
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Most important step(Interleave one by one)
    // Interleave one by one by popping from the stack and pushing into the queue,
    // then popping from the front of the queue and pushing into the queue.
    // This is done until the stack is empty.
    while(st.size()){
        // Pop from the stack and push into the queue.
        q.push(st.top());
        st.pop();
        
        // Pop from the front of the queue and push into the queue.
        // This is done to maintain the order of the elements.
        q.push(q.front());
        q.pop();
    }
    // reverse the queue using stack
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}