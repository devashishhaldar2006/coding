#include<iostream>
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
class DLL{//user defined data structure
public:
    Node* head = NULL;
    Node* tail= NULL;
    int size;
    DLL(){//constructor
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
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
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
       if(idx<0 || idx>size) cout<<"Invalid  Index"<<endl;
       else if(idx==0) insertAtHead(val);
       else if(idx==size) insertAtTail(val);
       else{
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        size++;
       }
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
    DLL ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtTail(50);
    ll.insertAtHead(50);
    ll.insertAtIdx(2,90);
    ll.display();
 
}