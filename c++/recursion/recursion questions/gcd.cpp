#include<iostream>
#include<vector>
#include<string>
using namespace std;
//Euclid divison algorithm(long divison method)
int gcd(int a,int b){
    //base case
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    //TC=log(a+b)
    int a=24;
    int b=60;
    cout<<gcd(a,b);
    //gcd(a,b)=gcd(b,a) aap kisi bhi order me do numbers it will work
}