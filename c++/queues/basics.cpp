#include<iostream>
#include<queue>
using namespace std;
int main(){
    //push happens at back
    //pop happens at front

    //overflow only happen when u implement queue using array
    // underflow only when queue is empty
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;//BOOL 1 0
    q.pop();
    cout<<q.front()<<endl;
}