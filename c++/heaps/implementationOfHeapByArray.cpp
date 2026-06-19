#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        arr[idx]=val;
        int i=idx;
        idx++;
        // swap till i==1
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i=parent;
        }
    }
    void pop() {
    if(idx == 1) return; // heap empty

    idx--;
    arr[1] = arr[idx];

    int i = 1;

    while(true) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int smallest = i;

        if(left < idx && arr[left] < arr[smallest])
            smallest = left;

        if(right < idx && arr[right] < arr[smallest])
            smallest = right;

        if(smallest == i)
            break;

        swap(arr[i], arr[smallest]);
        i = smallest;
    }
}
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(){
    MinHeap pq;
    pq.push(45);
    pq.push(4);
    pq.push(100);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.display();
}