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
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    // int sum[m][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         sum[i][j]=arr[i][j]+arr1[i][j];
    //     }
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<sum[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //without extra space(this doesnt take much space)
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]+=arr1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}