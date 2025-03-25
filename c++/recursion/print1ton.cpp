#include<iostream>
using namespace std;
void sos(int i,int n){
    //base case
    if(i>n) return;
    cout<<i<<endl;
    sos(i+1,n);
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    sos(1,n);
}