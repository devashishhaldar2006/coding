#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter target element:";
    cin>>target;
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}