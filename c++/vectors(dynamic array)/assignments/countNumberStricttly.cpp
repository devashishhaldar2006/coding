#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,4,5,6,7,5,9,3};
    int count=0;
    int x=3;
    sort(v.begin(),v.end());
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx=i;
    }
    cout<<v[idx+1]<<endl;
    cout<<v[idx+2];
}