#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    vector<int> arr;

    Queue(int val){
        f = 0;
        b = 0;
        arr.resize(val);  // better way
    }

    void push(int val){
        if(b == arr.size()){   // fixed full condition
            cout << "Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop(){
        if(f == b){   // fixed empty condition
            cout << "Queue is EMPTY!!" << endl;
            return;
        }
        f++;
    }

    int front(){
        if(f == b){
            cout << "Queue is EMPTY!!" << endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f == b){
            cout << "Queue is EMPTY!!" << endl;
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return b - f;
    }

    bool empty(){
        return f == b;
    }

    void display(){
        if(f == b){
            cout << "Queue is EMPTY!!" << endl;
            return;
        }
        for(int i=f; i<b; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.push(60);   // will show full

    q.pop();

    q.display();
}
