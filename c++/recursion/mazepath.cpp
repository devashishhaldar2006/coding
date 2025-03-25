#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    //base case
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=downways+rightways;
    return totalways;   
}
void PrintPath(int sr,int sc,int er,int ec,string s){
    //base case
    if(sr>er || sc>ec) return; //destination not reached
    if(sr==er && sc==ec){ //destination reached 
        cout<<s<<endl;
        return;
    }
    PrintPath(sr,sc+1,er,ec,s+"R");//RIGHT
    PrintPath(sr+1,sc,er,ec,s+"D");//DOWN   
}
int main(){
    PrintPath(0,0,2,2,"");
    // cout<<maze(0,0,2,2)<<endl;
}