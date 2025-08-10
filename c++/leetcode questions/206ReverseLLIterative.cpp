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
ListNode* reverseList(ListNode* head) {
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
int main(){
}