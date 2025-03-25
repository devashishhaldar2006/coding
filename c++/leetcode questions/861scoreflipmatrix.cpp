#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
    for(int i=0;i<m;i++){
        //flip
        if(grid[i][0]==0){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    //if noz>noo
    for(int j=0;j<n;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<m;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<m;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
            sum+=grid[i][j]*x;
            x*=2;
        }

    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;     
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        v[i].resize(n); // Resize each row to hold n elements
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<matrixScore(v);
}