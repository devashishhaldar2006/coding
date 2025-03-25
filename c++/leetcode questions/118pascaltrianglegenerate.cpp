#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;     
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        v[i].resize(i+1); // Resize each row to hold i + 1 elements
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}