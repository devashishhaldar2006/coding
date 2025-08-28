#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(st.size()==0 || st.top()!=ch){
            st.push(ch);
        }
    }
    s="";
    while(st.size()){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}