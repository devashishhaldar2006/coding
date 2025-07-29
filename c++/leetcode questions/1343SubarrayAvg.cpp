#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n=arr.size();
    int count=0;
    double avg=0;
    //sliding window algo
    for(int j=0;j<k;j++){
        avg+=arr[j];
    }
    if(threshold*k<=avg) count++;
    int i=1;
    int j=k;
    while(j<n){
        avg+=arr[j]-arr[i-1];
        if(avg>=threshold*k) count++;
        i++;
        j++;
    }
    return count;
}
int main(){

}
