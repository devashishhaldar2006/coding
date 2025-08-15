#include <iostream>
#include <stack>
#include <vector>
using namespace std;
//revrse using extra array
void print(stack<int>& st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    vector<int> v;
    while(st.size()>0){
        cout<<st.top()<<" ";
        v.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++){
        st.push(v[i]);
    }
    cout<<endl;
    print(st);
}
