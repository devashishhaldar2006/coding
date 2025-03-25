#include<iostream>
using namespace std;
void sos(int n){
    //base case
    if(n==0) return;
    cout<<n<<endl;
    sos(n-1);
}
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    sos(n);
}