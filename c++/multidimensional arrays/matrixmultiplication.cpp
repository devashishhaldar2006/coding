#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    int p;
    cout<<"Enter the number of rows:";
    cin>>p;
    int q;
    cout<<"Enter the number of columns:";
    cin>>q;
    if(n!=p){
        cout<<"Matrix multiplication not possible";
    }
    else{
        int a[m][n];
        int b[p][q];
        int c[m][q];
        cout<<"Enter the elements of first matrix:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements of second matrix:";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"The resultant matrix is:"<<endl;;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}