#include<iostream>
#include<vector>
using namespace std;
class Node{
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
class Deque{//user defined data structure
public:
    Node* head = NULL;
    Node* tail= NULL;
    int size;
    Deque(){//constructor
        head=tail=NULL;
        size=0;
    }
    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0) {
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
   void popFront(){
    if(size==0){
        cout<<"Queue is empty!!";
        return;
    }
    head=head->next;
    if(head) head->prev=NULL;
    if(head==NULL) tail=NULL;
    size--;
   }
   void popback(){
    if(size==0){
        cout<<"Queue is empty!!";
        return;
    }
    else if(size==1){
        popFront();
        return;
    }
    Node* temp=tail->prev;
    temp->next=NULL;
    tail=temp;
    size--;
   }
   int front(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
   void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
};

int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(10);
    dq.pushBack(10);
    dq.pushBack(10);
    dq.display();
    dq.pushFront(90);
    dq.display();
    
    
}