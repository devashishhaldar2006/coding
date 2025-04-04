#include<iostream>
#include<vector>
#include<string>
using namespace std;
void combination(vector <int> v,int arr[],int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    combination(v,arr,n,8,0);
}