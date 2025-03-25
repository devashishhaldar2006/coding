#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    int power=1;
    bool flag=true;
    if(b<0){
        flag=false;//exponent entered is negative
        b=-b;
    }    
    for(int i=1;i<=b;i++){
        power*=a;
    }

    if(flag==false){
        power=1/power;//exponent entered is negative
        b=-b;
    }
    if(a==0 && b==0) cout<<"not defined";
    else cout<<a<<" raised to the power "<<b<<" is "<<power;

}