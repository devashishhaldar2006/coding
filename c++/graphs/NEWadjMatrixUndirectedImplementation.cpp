#include<iostream>
#include<vector>
using namespace std;
class Graph{
    int n;
    vector<vector<bool>> adjMatrix;
public:
    Graph(int n){
        this->n=n;
        adjMatrix.resize(n,vector<bool>(n,false));
    }
    void addEdge(int i,int j){
        adjMatrix[i][j]=true;
        adjMatrix[j][i]=true;
    }
    void removeEdge(int i,int j){
        adjMatrix[i][j]=false;
        adjMatrix[j][i]=false;
    }
    void toString(){
        for(int i=0;i<n;i++){
            cout<<i<<" ";
            for(int j=0;j<n;j++){
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.toString();
    return 0;
}