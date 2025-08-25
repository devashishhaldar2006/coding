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
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    pushAtIdx(st,2,80);
    print(st);
}
