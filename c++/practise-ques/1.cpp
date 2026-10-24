#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>mx){
            smx=mx;
            mx=v[i];
        }
        else if(v[i]<mx and v[i]>smx){
            smx=v[i];
        }
    }
    cout<<smx<<" ";
}