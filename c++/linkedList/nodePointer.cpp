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
    Node* a= new Node(10);//head of LL
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);//tail of LL
    a->next=b;
    b->next=c;
    c->next=d;

    Node* temp=a;//head
    while(temp!=NULL){
        cout<<temp->val<<" ";//value print krdo
        temp=temp->next;//address dql do
    }
}