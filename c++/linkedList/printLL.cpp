//array limitations
//1. contagious memory allocation
//2.not dynamic
#include<iostream>
using namespace std;
class Node{//LL node 
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    //10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    d.val=40;
    //forming LL
    a.next=&b; 
    b.next=&c; 
    c.next=&d;

    Node temp=a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}