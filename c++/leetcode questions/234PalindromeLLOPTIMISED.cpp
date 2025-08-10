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
bool isPalindrome(ListNode* head) {
    //left middle
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow is at left middle/middle
    ListNode* newHead=reverse(slow->next);
    ListNode* a=head;
    ListNode*b=newHead;
    while(b){
        if(a->val !=b->val) return false;
        a=a->next;
        b=b->next;
    }
    return true;
}
int main(){
}