#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1, 34, 35,34, 7, 25,3, 36, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool flag=true;
    for(int i = 0; i < size; i++){
        for(int j=i+1;j<=size;j++){
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
    }
    if(flag==true) cout<<"no duplicates";
    else cout<<"duplicates present";
}
