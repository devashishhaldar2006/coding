//array limitations
//1. contagious memory allocation
//2.not dynamic
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
ListNode* deleteMiddle(ListNode* head) {
    if(head==NULL ||  head->next==NULL) return NULL;
    int size=0;
    ListNode* temp=head;
    while(temp){
        size++;
        temp=temp->next;
    }
    temp=head;
    for(int i=1;i<size/2;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
}