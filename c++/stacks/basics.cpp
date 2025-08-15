#include <iostream>
#include <stack>
using namespace std;
//provides us discipline
//provides us intuition
//LIFO/FILO->last in first out ot first in last out
//push, pop , top all are O(1) 


//size is unlimited
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    //printing stack in rev

    while(st.size()>0){//issue-stack empty
        cout<<st.top()<<" ";
        st.pop();
    }
}
