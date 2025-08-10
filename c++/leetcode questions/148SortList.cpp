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
ListNode* merge(ListNode* a, ListNode* b) {
    //SC=O(1)
    ListNode* c=new ListNode(100);
    ListNode* temp=c;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL) temp->next=b;
    else temp->next=a;
    return c->next;
}

ListNode* sortList(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* slow=head;
    ListNode* fast=head;
    //left middle
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is at left middle
    ListNode* a=head;
    ListNode* b=slow->next;
    slow->next=NULL;
    a=sortList(a);
    b=sortList(b);
    ListNode* c=merge(a,b);
    return c;
}
int main(){
}