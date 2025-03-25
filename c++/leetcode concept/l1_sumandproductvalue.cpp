#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }

    cout<<"the sum of product and sum of "<<n<<" is "<<(sum+product);

}