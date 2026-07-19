#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> st;
vector<int> lazy;
void buildTree(int arr[],int i,int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=(lo+hi)/2;
    buildTree(arr,2*i+1,lo,mid);
    buildTree(arr,2*i+2,mid+1,hi);
    st[i]=st[2*i+1]+st[2*i+2];
}
int getSum(int i,int lo,int hi,int l,int r){
    // check for pending updates
    if(lazy[i]!=0){
        st[i]+=(hi-lo+1)*lazy[i];
        if(lo!=hi){
            lazy[2*i+1]+=lazy[i];
            lazy[2*i+2]+=lazy[i];
        }
        lazy[i]=0;
    }
    if(l>hi || r<lo) return 0;
    if(l<=lo && hi<=r) return st[i];
    int mid=(lo+hi)/2;
    int left=getSum(2*i+1,lo,mid,l,r);
    int right=getSum(2*i+2,mid+1,hi,l,r);
    return left+right;
}
void updateSum(int i,int lo,int hi,int l,int r,int val){
    // check for pending updates
    if(lazy[i]!=0){
        st[i]+=(hi-lo+1)*lazy[i];
        if(lo!=hi){
            lazy[2*i+1]+=lazy[i];
            lazy[2*i+2]+=lazy[i];
        }
        lazy[i]=0;
    }
    if(l>hi || r<lo) return;
    if(l<=lo && hi<=r){
        st[i]+=(hi-lo+1)*val;
        if(lo!=hi){
            lazy[2*i+1]+=val;
            lazy[2*i+2]+=val;
        }
        return;
    }
    int mid=(lo+hi)/2;
    updateSum(2*i+1,lo,mid,l,r,val);
    updateSum(2*i+2,mid+1,hi,l,r,val);
    st[i]=st[2*i+1]+st[2*i+2];
}
int main(){
    int arr[]={1,4,2,8,6,4,9,3};
    int n=sizeof(arr)/4;
    st.resize(4*n);
    lazy.resize(4*n,0);
    buildTree(arr,0,0,n-1);
    int q;
    while(cin>>q){
        if(q==1){
            int l,r,val;
            cin>>l>>r>>val;
            updateSum(0,0,n-1,l,r,val);
        }
        else{
            int l,r;
            cin>>l>>r;
            cout<<getSum(0,0,n-1,l,r)<<endl;
        }
    }
    return 0;
}