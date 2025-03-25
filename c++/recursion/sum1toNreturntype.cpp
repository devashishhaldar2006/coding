#include<iostream>
using namespace std;
int sum1ToN(int n){
    //base case
    if(n==0){
        return 0;
    }
    return n+sum1ToN(n-1);
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    cout<<sum1ToN(n)<<endl;
}