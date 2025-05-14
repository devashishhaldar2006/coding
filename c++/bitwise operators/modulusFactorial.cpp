#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> fact(n+1,1);
    int MOD=10000000+7;
    for(int i=2;i<=n;i++){
        fact[i]=((i%MOD)*(fact[i-1]%MOD))%MOD;
    }
    return fact;
}
int main() {
    vector<long long int> v=factorial(25);
    for(int i=0;i<v.size();i++){
        cout<<i<<"!:"<<v[i]<<endl;
    }
}