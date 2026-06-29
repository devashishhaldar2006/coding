#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m;
    cin>>k>>l>>m;

    vector<bool> dp(1000005,false);
    dp[1] = true;
    dp[k] = true;
    dp[l] = true;
    for(int i=2;i<=1000000;i++){
        if(i==k or i==l) continue;
        dp[i]=!(dp[i-1] and (i-k>=1?dp[i-k]:true) and (i-l>=1?dp[i-l]:true));
    }
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        if(dp[n]) cout<<"A";
        else cout<<"B";
    }
    return 0;
}