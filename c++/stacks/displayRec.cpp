#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void displayRec(stack<int> st){
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayRec(st);
}
