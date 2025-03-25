#include<iostream>
using namespace std;
void sum1ToN(int sum,int n){
    //base case
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1ToN(sum+n,n-1);
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    sum1ToN(0,n);
}