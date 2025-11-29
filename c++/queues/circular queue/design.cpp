#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int s;
    int capacity;
    vector<int> arr;

    Queue(int val){ 
        f = 0;
        b = 0;
        s = 0;  
        capacity = val;
        arr.resize(val);
    } 
    
    void push(int val){
        if(s == capacity){
            cout << "Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
        if(b == capacity)
            b = 0; 
        s++;
    }  
    
    void pop(){
        if(s == 0){
            cout << "Queue is EMPTY!!" << endl;
            return;
        }
        f++;
        if(f == capacity)
            f = 0;
        s--;
    }
    
    int front(){
        if(s == 0){
            cout << "Queue is EMPTY!!" << endl;
            return -1;
        }
        return arr[f];
    }
    
    int back(){
        if(s == 0){
            cout << "Queue is EMPTY!!" << endl;
            return -1;
        }
        if(b==0) return arr[capacity-1];
        return arr[b-1];
        
    }
    
    int size(){
        return s;
    }
    
    bool empty(){
        return s == 0;
    }
    
    void display(){
        if(s == 0){
            cout << "Queue is EMPTY!!" << endl;
            return;
        }
        int tempF = f;
        int count = 0;
        while(count < s){
            cout << arr[tempF] << " ";
            tempF++;
            if(tempF == capacity)
                tempF = 0;
            count++;
        }
        cout << endl;
        return;
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
    q.push(60);  // queue full
    q.pop();
    q.display();
}
