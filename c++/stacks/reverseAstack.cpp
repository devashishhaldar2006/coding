#include <iostream>
#include <stack>
using namespace std;
//revrse using 2 extra stacks
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> temp1;//extra stack used
    stack<int> temp2;//extra stack used
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp1.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    } 
}
