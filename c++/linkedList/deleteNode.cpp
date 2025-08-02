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
void display(Node* head){//pass by value
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
};
Node* deletenode(Node* head,int targetVal){
    if(head->val==targetVal){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
    Node* a= new Node(10);//head of LL
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);//tail of LL
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    deletenode(a,30);
    display(a);
}