#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of stars:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        for(int k=2;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int l=1;l<=n-i;l++){
            cout<<a;
            a++;

        }
        cout<<endl;
        
    }

}