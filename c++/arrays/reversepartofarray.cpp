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

void reversePart(int a,int b,vector<int> &v){
    int i=a;
    int j=b;
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main(){
    int s,m;
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v);
    cout<<"enter the index range:";
    cin>>s>>m;
    reversePart(s,m,v);
    display(v);

}