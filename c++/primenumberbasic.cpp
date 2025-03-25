#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    bool flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"not a prime no";
    }
    else{
        cout<<"prime no";
    }

}