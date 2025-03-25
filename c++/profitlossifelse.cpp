#include<iostream>
using namespace std;
int main(){
    //profit loss condtion
    // sp-cp=profit
    // cp-sp=loss
    int sp,cp;
    cout<<"enter sp:";
    cin>>sp;
    cout<<"enter cp:";
    cin>>cp;
    if(sp>cp){
        cout<<"profit"<<sp-cp<<endl;
    }
    if(sp<cp){
        cout<<"loss"<<cp-sp<<endl;
    }
    if(sp==cp){
        cout<<"no profit no loss"<<endl;
    }

}