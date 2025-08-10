#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,1,5,4,5,1,14,1};
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(v[j]<v[j+1]){
                swap(v[j+1],v[j]);
                flag=false;
            }
        }
        flag=true;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}