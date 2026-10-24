#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int x=0;
    for(int i=0;i<n;i++){
        x=x^v[i];
    }
    int k=0;
    while(true){
        if((x&1)==1) break;
        k++;
        x=x>>1;
    }
    x=0;
    for(int i=0;i<n;i++){
        x=x^v[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        if((v[i]>>k)&1==1) res=res^v[i];
    }
    cout<<res<<endl;
    cout<<(res^x)<<endl;
}