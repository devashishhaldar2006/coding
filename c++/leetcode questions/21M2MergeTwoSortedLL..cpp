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
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
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
int main(){
}