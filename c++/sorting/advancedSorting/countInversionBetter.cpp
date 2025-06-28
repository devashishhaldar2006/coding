#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//TC=O(nlogn) or log2N(base 2)
//stable hota hai merge sort
int inversion(vector<int>& a,vector<int>& b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{//a[i]<=b[j]
            i++;
        }
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];//by applying a equal to we make merge sort stable
        else res[k++]=b[j++];
    }
    if(i==a.size()){// a is  at end
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j==b.size()){// b is  at end
        while(i<a.size()) res[k++]=a[i++];
    }
}
int mergeSort(vector<int>& v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
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
    count+=mergeSort(a);
    count+=mergeSort(b);
    //count the inversions
    count+=inversion(a,b);
    //merging sorted arrays
    merge(a,b,v);
    a.clear();//for improving space complexity
    b.clear();
    return count;
}
int main(){
    vector<int> a={5,1,3,0,4,9,6};
    cout<<mergeSort(a);
}