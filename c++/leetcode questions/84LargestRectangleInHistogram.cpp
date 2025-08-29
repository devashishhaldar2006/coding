#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int largestRectangleArea(vector<int>& arr) {
    int n=arr.size();
    stack<int> st;
    int nsi[n];
    nsi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size() && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) nsi[i]=n;
        else nsi[i]=st.top();
        st.push(i);
    }
    stack<int> st1;
    int psi[n];
    psi[0]=-1;
    st1.push(0);
    for(int i=1;i<n;i++){
        while(st1.size() && arr[st1.top()]>=arr[i]) st1.pop();
        if(st1.size()==0) psi[i]=-1;
        else psi[i]=st1.top();
        st1.push(i);
    }
    int maxArea=0;
    for(int i=0;i<n;i++){
        int area=arr[i]*(nsi[i]-psi[i]-1);
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
int main(){
    
}