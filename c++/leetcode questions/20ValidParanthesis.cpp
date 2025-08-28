#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
bool isValid(string s) {
    int n=s.length();
    if(n%2!=0) return false;
    stack <char> st;
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }
        else{
            if(st.size()==0) {
                return false;
            }
            char top=st.top();
            if((c==')' && top=='(') ||
                (c=='}' && top=='{') ||
                (c==']' && top=='[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.size()==0;
}
int main(){
    
}