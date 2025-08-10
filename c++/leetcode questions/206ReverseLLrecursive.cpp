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
    //recursive solution
    if(head==NULL || head->next==NULL) return head;
    ListNode* newHead=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}
int main(){
}