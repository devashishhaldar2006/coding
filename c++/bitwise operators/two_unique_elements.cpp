#include<iostream>
//question--two elements are unique baki sb ek bar hai
using namespace std;
void two_unique(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++) res=res^arr[i];
    int temp=res;
    int k=0;
    while(true){
        if((temp&1)==1) break;
        k++;
        temp=temp>>1;
    }
    int retval=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(((num>>k)&1)==1) retval=retval^num;
    }
    cout<<retval<<endl;
    res=retval^res;
    cout<<res<<endl;
    
}
int main() {

    int arr[]={1,2,1,9,2,5,8,8,5,4,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    two_unique(arr,size);
	return 0;
}