#include <iostream>
#include <vector>
using namespace std;
class Stack{
public:
    vector<int> v;
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}
