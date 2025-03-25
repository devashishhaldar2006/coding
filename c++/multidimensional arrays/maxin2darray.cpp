#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the number of rows and columns:";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(smax>arr[i][j] && arr[i][j]!=max){
                smax=arr[i][j];
            }
        }
    }
    cout<<endl; 
    cout<<"Max element is:"<<max<<endl;
    cout<<endl; 
    cout<<"Second Max element is:"<<smax<<endl;
}