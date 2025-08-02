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
    int len=0;
    ListNode* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    if(n==len){
        head=head->next;
        return head;
    }
    //nth from end=(len-n+1)nth from start
    int m=len-n+1;
    int idx=m-1;//index of node to be deleted;
    temp=head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
}