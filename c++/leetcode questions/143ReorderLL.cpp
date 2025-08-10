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
ListNode* reverse(ListNode* head){
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
void reorderList(ListNode* head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow is at left middle/middle
    ListNode* b=reverse(slow->next);
    ListNode* a=head;
    slow->next=NULL;//for breaking list
    //merge these two alternatively a and b
    ListNode* c=new ListNode(100);
    ListNode* tempC=c;
    ListNode* tempA=a;
    ListNode* tempB=b;
    while(tempA && tempB){
        tempC->next=tempA;
        tempA=tempA->next;
        tempC=tempC->next;

        tempC->next=tempB;
        tempB=tempB->next;
        tempC=tempC->next;
    }
    tempC->next=tempA;
    head=c->next;
}
int main(){
}