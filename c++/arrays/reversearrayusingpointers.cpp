#include<iostream>
#include<vector>
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
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v);
    display(v);
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(&v[i],&v[j]);
        i++;
        j--;
    }
    display(v);
}