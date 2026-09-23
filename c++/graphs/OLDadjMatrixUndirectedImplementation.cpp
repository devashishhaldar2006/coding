#include<iostream>
using namespace std;

class Graph{
private:
    bool** adjMatrix;
    int n;
public:
    // constructor
    Graph(int n){
        this->n=n;
        // array of pointers
        adjMatrix=new bool*[n];
        // create each row
        for(int i=0;i<n;i++){
            adjMatrix[i]=new bool[n];
            // initializing everything to false
            for(int j=0;j<n;j++){
                adjMatrix[i][j]=false;
            }
        }
    }
    // add Edge
    void addEdge(int i,int j){
        adjMatrix[i][j]=true;
        adjMatrix[j][i]=true;
    }
    // remove edge
    void removeEdge(int i,int j){
        adjMatrix[i][j]=false;
        adjMatrix[j][i]=false;
    }
    //  print matrix
    void toString(){
        for(int i=0;i<n;i++){
            cout<<i<<" ";
            for(int j=0;j<n;j++){
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    ~Graph(){
        for(int i=0;i<n;i++){
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
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