#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to transpose a matrix
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m=matrix.size(); // Get the number of rows
    int n=matrix[0].size(); // Get the number of columns
    
    // Loop through each column and swap the elements
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            // Swap the elements at matrix[i][j] and matrix[j][i]
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    // Return the transposed matrix
    return matrix;
}

int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    
    // Create a vector of vectors to hold the matrix
    vector<vector<int>> v(n);
    
    // Resize each row to hold m elements
    for(int i=0;i<n;i++){
        v[i].resize(m);
    }
    
    // Input the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    
    // Transpose the matrix
    vector<vector<int>> t=transpose(v);
    
    // Print the transposed matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
