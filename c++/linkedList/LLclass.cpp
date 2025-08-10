//Insert at End
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{//user defined data structure
public:
    Node* head = NULL;
    Node* tail= NULL;
    int size;
    LinkedList(){//constructor
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtTail(Node* head,int val){
        Node* t=new Node(val);
        while(head->next!=NULL) head=head->next;
        head->next=t;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    Node* a= new Node(5);
    ll.insertAtTail(10);// {10->NULL}
    ll.insertAtTail(20);// {10->20->NULL}
    ll.display();
    ll.insertAtTail(a,30);
    ll.insertAtTail(a,40);
    ll.display(a);
    // cout<<ll.size;


}