// Given a sorted binary array, efficiently count the total number of 1’s in it.


#include <iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int count=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1){
            count++;
            lo=mid+1;
        }
        else if(arr[mid]<1){
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<count;
}
