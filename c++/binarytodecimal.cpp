#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //optimal approach
    int binary;
    cout<<"enter a number:";
    cin>>binary;
    int ans=0;
    int i=0;
    while(binary!=0){
        int digit=binary%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        binary=binary/10;
        i++;

    }
    cout<<"Decimal:"<<ans<<endl;

}