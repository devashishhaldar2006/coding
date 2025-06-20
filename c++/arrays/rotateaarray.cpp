#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void input(int n,vector <int>& a){
    cout<<"Enter elements:";
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void reversePart(int a,int b,vector<int> &v){
    int i=a;
    int j=b;
    while(i<=j){
        swap(&v[i],&v[j]);
        i++;
        j--;
    }
    return;
}
int main(){
    int k;
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v);
    cout<<"enter value of k:";
    cin>>k;
    if(k>n) k=k%n;//important//rounds eliminate kr rhe ho 
    display(v);
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}