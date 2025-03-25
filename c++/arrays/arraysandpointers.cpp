#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,4,5,3,1,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *ptr=arr;
    // int *ptr=&arr[0];
    // for(int i=0;i<=size;i++){
    //     cout<<ptr[i]<<' ';
    // }
    for(int i=0;i<=size;i++){
        cout<<i[ptr]<<' ';
    }
    cout<<endl;
    ptr=arr;//ptr is poinitng towards 1st element

    *ptr=9;
    ptr++;
    *ptr=8;
    ptr--;
    for(int i=0;i<=size;i++){
        cout<<*ptr<<' ';
        ptr++;
    }
    ptr=arr;
}