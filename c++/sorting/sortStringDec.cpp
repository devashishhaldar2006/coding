#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//O(n2) worst case
//O(n2) avg case
//O(n) best case
//bubble sort is a stable sort
//total number of swaps=total no of operations=(n*(n-1))/2
//relative order maintain krta hai bubble sort
int main(){
    string str="AZYZXBDXJK";
    int n=str.size();
    int target='X';
    string str1="";
    for(int i=0;i<n;i++){
        if(str[i]>=target){
            str1.push_back(str[i]);
        }
    }
    int m=str1.size();
    //bubble sort algo
    for(int i=0;i<m-1;i++){//n-1 passes
        bool flag=true;
        for(int j=0;j<m-1-i;j++){
            if(str1[j]>str1[j+1]){
                swap(str1[j],str1[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    cout<<endl;
    cout<<str1;
}