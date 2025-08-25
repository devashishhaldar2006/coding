#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRec(st);
    st.push(x);
}
void pushAtBottomRecursive(stack<int>& st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottomRecursive(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottomRecursive(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayRec(st);
    cout<<endl;
    reverse(st);
    displayRec(st);
}
