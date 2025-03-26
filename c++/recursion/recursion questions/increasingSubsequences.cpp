#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> ans,int k){
  //base case
    if(idx==n){
      if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
        }
        cout<<endl;
      }
      return;
    }
    if(ans.size()+(n-idx)<k) return; //TC BETTER HO JYEGI
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k=3;
    printSubset(arr,n,0,v,k);
}