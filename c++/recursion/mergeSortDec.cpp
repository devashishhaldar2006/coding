#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//TC=O(nlogn) or log2N(base 2)
//stable hota hai merge sort
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]) res[k++]=a[i++];//by applying a equal to we make merge sort stable
        else res[k++]=b[j++];
    }
    if(i==a.size()){// a is  at end
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j==b.size()){// b is  at end
        while(i<a.size()) res[k++]=a[i++];
    }
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    //copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic --recursion
    mergeSort(a);
    mergeSort(b);
    //merging sorted arrays
    merge(a,b,v);
    a.clear();//for improving space complexity
    b.clear();
}
int main(){
    vector<int> a={1,2,3,4,5};
    mergeSort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}