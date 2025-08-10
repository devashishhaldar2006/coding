#include<iostream>
#include<vector>
using namespace std;
class ListNode{//LL node  
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
ListNode* reverse(ListNode* head) {
    //iterative solution
    if(head==NULL || head->next==NULL) return head;
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
ListNode* reverseBetween(ListNode* head, int left, int right) {
    //reverse part of LL
    if(left==right) return head;
    ListNode* a=NULL;                   
    ListNode* b=NULL;                   
    ListNode* c=NULL;                   
    ListNode* d=NULL;                   
    ListNode* temp=head;
    int n=1;
    while(temp){
        if(n==left-1) a=temp;
        if(n==left) b=temp;
        if(n==right) c=temp;
        if(n==right+1) d=temp;
        temp=temp->next;
        n++;
    }
    if(a) a->next=NULL;
    c->next=NULL;
    c=reverse(b);
    if(a) a->next=c;
    b->next=d;
    if(a) return head;
    else return c;                   
}
int main(){
}