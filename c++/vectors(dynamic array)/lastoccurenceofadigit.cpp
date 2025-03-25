#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter target element:";
    cin>>target;
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]==target) {
            idx=i;
            break;
        }
    }
    cout<<"last occurence is "<<idx;

}