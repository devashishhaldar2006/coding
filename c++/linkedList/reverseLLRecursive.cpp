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
//TC=O(N)
//SC=O(N)
void display(Node* head){// recursive display
    if(head==NULL) return;//base case
    display(head->next);//recursive case
    cout<<head->val<<" ";
}
int main(){
    Node* a= new Node(10);//head of LL
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);//tail of LL
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a); //head
}