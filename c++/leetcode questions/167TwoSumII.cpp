#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& arr, int m) {
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int s=arr[i]+arr[j];
        if(m>s){
            i++;
        }
        else if(m<s){
            j--;
        }
        else{
            return {i+1,j+1};
        }
    }
    return {};
}
int main(){
}