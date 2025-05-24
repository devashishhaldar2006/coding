#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of stars:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0) cout<<(char)(j+64)<<" ";
            else cout<<j<<" ";
        }
        cout<<endl;
    }

}