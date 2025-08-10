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
ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* a=head;
    ListNode* b=head->next;
    while(b!=NULL){
        while(b!=NULL && b->val==a->val){
            b=b->next;
        }
        a->next=b;
        a=b;
        if(b!=NULL) b=b->next;
    }
    return head;
}
int main(){
}