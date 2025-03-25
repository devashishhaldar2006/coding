#include<iostream>
#include<climits>
using namespace std;
void display(int *a,int n){//pass by reference
    for(int i=0;i<=n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
void update(int *a,int n){
    a[0]=4;
}
int main(){
    int arr[]={2,4,5,3,1,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    update(arr,size);
    display(arr,size);
}