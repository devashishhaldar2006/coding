#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void pushAtBottom(stack<int>& st,int x){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);
    print(st);
}
