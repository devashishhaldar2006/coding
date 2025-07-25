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
        this->next=NULL;//ab garbage values nhi ayegi
    }
};
int main(){
    //10 20 30 40
    Node a(10);
    // cout<<a.next;//garbage vallue
    // a.val=10;
    Node b(20);
    // b.val=20;
    Node c(30);
    // c.val=30;
    Node d(40);
    d.val=40;
    //forming LL
    a.next=&b; 
    b.next=&c; 
    c.next=&d;
    //a ke pass b ki access
    cout<<(*(a.next)).val<<endl;
    cout<<((a.next))->val<<endl;
    cout<<(a.next)->next<<endl; 
    // cout<<(*(a.next)).next<<endl; 
    cout<<(((a.next))->next)->val<<endl;
}