#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4]={{1,3,5,7},{3,4,7,8},{1,4,12,3}};
    int maxRowSum=INT_MIN;
    int idx=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxRowSum){
            maxRowSum=sum;
            idx=i;
        }
    }
    cout<<idx;
}