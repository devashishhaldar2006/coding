#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> heights={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> drr(heights.size());
    int max=heights[heights.size()-1];
    drr[heights.size()-1]=-1;
    for(int i=heights.size()-2;i>=1;i--){
        drr[i]=max;
        if(max<heights[i]){
            max=heights[i];
        }
    }
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
}