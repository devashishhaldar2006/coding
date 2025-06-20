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
int main(){
    vector<int> v1;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v1);
    display(v1);
    //i+j=n-1
    vector<int> v2(v1.size());
    for(int i=0;i<v2.size();i++){
        v2[i]=v1[v1.size()-1-i];
    }
    display(v2);

}