#include<iostream>
#include<vector>
using namespace std;
//DOUBLY LL

//benefits of doubly are:
//1. reverse in O(1) space
//2. access the entire LL via any known node

/*
    while(t->prev!=NULL){
        t=t->prev;
    }
    Node* head=t;
    while(t->next!=NULL){
        t=t->nexr;
    }
    Node* tail=t;
*/
class Node{//LL node  
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayReverse(Node* tail){//O(1) SPACE
    Node* temp=tail;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    //forward
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    //backward
    a->prev=NULL;
    b->prev=a;
     c->prev=b;
    d->prev=c;
    display(a);
    displayReverse(d);
}