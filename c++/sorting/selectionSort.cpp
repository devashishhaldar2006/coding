#include<iostream>
#include<string>
#include<vector>
using namespace std;
//O(n2) worst case
//O(n2) avg case
//O(n2) best case
//selection sort is a unstable sort
//total number of swaps=total no of operations=(n*(n-1))/2

//use cases---cost o swapping, k min elements from starting,if size of array is small
int main(){
    int arr[]={1,25,1,6,3,21,4242,5,63,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
       v[i]=arr[i];
    }
    for(int ele: v){
        cout<<ele<<" ";
    }
    //selection sort algo
    for(int i=0;i<n-1;i++){//n-1 passes
        int min=v[i];
        int mindx=i;
        //min element calculation
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx=j;
            }
        }
        swap(v[i],v[mindx]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}