#include<iostream>
#include<string>
using namespace std;
int powerup(int n,int m){
    //base case
    if(m==1) return n;
    int ans=powerup(n,m/2);
    if(m%2==0) return ans*ans;
    else return ans*ans*n;
    
}
//time complexity O(logn)
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    int m;
    cout<<"enter :";
    cin>>m;
    cout<<powerup(n,m)<<endl;
}