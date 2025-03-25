#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // COLUMN DENA IS MUST ROW NHI BHI DOGE TO CHALEGA
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
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
}