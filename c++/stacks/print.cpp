#include <iostream>
#include <stack>
using namespace std;
//
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> temp;//extra stack used
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    //putting element back to st
    // while(temp.size()>0){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    while(temp.size()>0){//normal order print
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
}
