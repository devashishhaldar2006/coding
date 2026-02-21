#include<iostream>
#include<string>
using namespace std;
//O(n2) worst case
//O(n2) avg case
//O(n) best case
//bubble sort is a stable sort
//n-1 passes
//total number of swaps=total no of operations=(n*(n-1))/2
int main(){
    int arr[]={1,25,1,6,3,21,4242,5,63,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort algo
    for(int i=0;i<n-1;i++){//n-1 passes
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}