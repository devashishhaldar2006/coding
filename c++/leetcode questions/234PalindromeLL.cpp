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
bool isPalindrome(ListNode* head) {
    ListNode* c=new ListNode(100);
    //deep copy of head
    ListNode* temp=head;
    ListNode* tempC=c;
    while(temp){
        ListNode* node=new ListNode(temp->val);
        tempC->next=node;
        temp=temp->next;
        tempC=tempC->next;
    }
    c=c->next;
    c=reverse(c);
    ListNode* a=head;
    ListNode* b=c;
    while(a){
        if(a->val!=b->val) return false;
        a=a->next;
        b=b->next;
    }
    return true;
}
int main(){
}