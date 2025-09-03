#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
    stack<long long> st;
    long long mn;
    MinStack() {//constructor
        mn=LLONG_MAX;
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.size()==0){
            st.push(x);
            mn=x;
        }
        else if(x>=mn) st.push(x);
        else{
            st.push(2*x-mn);
            mn=x;
        }
    }
    
    void pop() {
        if(st.top()<mn){
            long long oldmn=2*mn-st.top();
            mn=oldmn;
        }
        st.pop();
    }
    int top() {
        if(st.top()<mn) return (int)mn;
        else return (int)st.top();
    }
    
    int getMin() {
        return mn;
    }
int main(){
    
}