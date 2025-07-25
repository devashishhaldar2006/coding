// Q3. Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum ones'
#include <iostream>
using namespace std;
int main(){
    int arr[4][4]={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int maxCount=0;
    int idx=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int lo=0;
            int hi=3;
            int count=0;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[i][mid]==1){
                    count++;
                }
                else if(arr[i][mid]<1) lo=mid+1;
                else hi=mid-1;
            }
            if(count>maxCount){
                maxCount=count;
                idx=i;
            }
        }
    }
    cout<<maxCount<<" "<<idx;
}