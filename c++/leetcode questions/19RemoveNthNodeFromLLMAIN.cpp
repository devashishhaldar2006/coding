#include<iostream>
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
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* slow=head;
    ListNode* fast=head;
    for(int i=1;i<=n+1;i++){
        if(fast==NULL) return head->next;
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return head;
}
int main(){
}