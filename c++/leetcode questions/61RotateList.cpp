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
ListNode* rotateRight(ListNode* head, int k) {
    if(k==0) return head;
    if(head==NULL || head->next==NULL) return head;
    ListNode* tail=NULL;
    int size=0;
    ListNode* temp=head;
    while(temp!=NULL){
        if(temp->next==NULL) tail=temp;
        size++;
        temp=temp->next;
    }
    k=k%size;
    temp=head;
    for(int i=1;i<size-k;i++){
        temp=temp->next;
    }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;

}
int main(){
}