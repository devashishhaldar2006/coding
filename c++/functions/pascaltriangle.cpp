#include<iostream>
using namespace std;
int factorial(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product*=i;
    }
    return product;
}
int combination(int n,int r){
    return (factorial(n))/(factorial(n-r)*factorial(r));
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}