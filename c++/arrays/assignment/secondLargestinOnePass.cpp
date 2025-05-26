#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 34, 35, 7, 25, 36, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int smax = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    cout << "Second largest element is: " << smax << endl;
}
