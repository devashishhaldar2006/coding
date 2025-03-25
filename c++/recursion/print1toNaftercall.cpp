#include<iostream>
using namespace std;
void sos(int n){
    //base case
    if(n==0) return;
    sos(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    sos(n);
}