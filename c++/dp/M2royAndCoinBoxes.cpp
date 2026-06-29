#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+10,0);
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        f[x]++;
        f[y+1]--;
    }
    for(int i=1;i<=n;i++){
        f[i]+=f[i-1];
    }
    vector<int> c(1000005,0);
    for(int i=0;i<=n;i++){
        c[f[i]]++;
    }
    for(int i=c.size()-2;i>=0;i--){
        c[i]+=c[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<c[x]<<endl;
    }
    return 0;
}