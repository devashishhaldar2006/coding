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
void reverseK(int k,queue<int>& q){
    stack<int> st;
    for (int i=1;i<=k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    for (int i=1;i<=n-k; i++)
    {
        q.push(q.front());
        q.pop();
    }

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k=2;
    reverseK(k,q);
    display(q);
}