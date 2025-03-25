#include<iostream>
using namespace std;
int main(){
    //1-2+3-4.........
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%2==0) sum+=-n/2;
        else sum+=-n/2+n;
    }
    

}