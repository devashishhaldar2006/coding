#include<iostream>
#include<string>
using namespace std;
int AtoB(int n,int m){
    //base case
    if(n==0) return 0;
    if(m==0) return 1;
    if(m==0 && n==0) return 0;
    return n*AtoB(n,m-1);
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    int m;
    cout<<"enter :";
    cin>>m;
    cout<<AtoB(n,m)<<endl;
}