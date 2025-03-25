#include<iostream>
using namespace std;
int factorial(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product*=i;
    }
    return product;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;
    int permutation=(factorial(n))/factorial(n-r);
    int combination=(factorial(n))/(factorial(n-r)*factorial(r));
    cout<<permutation<<endl;
    cout<<combination<<endl;
}