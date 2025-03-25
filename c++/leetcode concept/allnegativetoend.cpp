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
//two pointers approach
void sortArray(vector <int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]<0) j--;
        if(v[i]>0) i++;
        if(i>j) break;//breakthrough condition
        if(v[j]>0 && v[i]<0){
            swap(v[i],v[j]);
        }
    }
    return;
}

int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v);
    display(v);
    sortArray(v);
    display(v);
}