#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//TC=O(NlogN)
//SC=O(logN)
//unstable sort//in place sorting
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];//si//optimised quick sort//randomised pivor point
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<pivotElement) count++;
    }
    int pivotIdx=count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        else if(arr[i]>pivotElement) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthSmallest(int arr[],int si,int ei,int k){
    int pi=partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) kthSmallest(arr,pi+1,ei,k);
    else kthSmallest(arr,si,pi-1,k);
}
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);//7
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthSmallest(arr,0,n-1,k);
}