#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v={19,12,23,8,16};//valid for only positive numbers
    int n=v.size();   
    int x=0;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v[j]<=0) continue;
            else{
                if(min>v[j]){
                    min=v[j];
                    mindx=j;
                }
            }
        }
        v[mindx]=-x;
        x++;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<(-1)*v[i]<<" ";
    }
}