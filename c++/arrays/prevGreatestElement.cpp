#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> heights={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> arr(heights.size());
    int max=heights[0];
    arr[0]=-1;
    for(int i=1;i<heights.size();i++){
        arr[i]=max;
        if(max<heights[i]){
            max=heights[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}