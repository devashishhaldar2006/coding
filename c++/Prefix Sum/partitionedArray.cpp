#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5,5,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   //formation of prefix sum
   for(int i=1;i<n;i++){
    arr[i]+=arr[i-1];
   } 
   bool flag=false;
   int idx=-1;
   for(int i=0;i<n;i++){
    if(2*arr[i]==arr[n-1]) {
        flag=true;
        idx=i;
        break;
    }
   }
   if(flag) cout<<"Yes it can be partiioned after "<<idx;
   else cout<<"No it cant be";
}
