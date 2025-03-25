#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int ans=1;
    int flag=0;
    for(int i=0;i<=30;i++){
        if(ans==n){
            flag=1;
        }
        if(ans<INT_MAX/2)
        ans=ans*2;

    }
    if(flag==1) cout<<"true";
    else cout<<"false";
}