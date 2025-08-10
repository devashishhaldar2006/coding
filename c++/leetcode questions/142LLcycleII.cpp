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
ListNode* detectCycle(ListNode *head) {
    //m=l-2*n(by math) or m=l-3*n all true
    //kitna bhi bdha do pkda jayega cycle
    ListNode* slow=head;
    ListNode* fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) {
            flag=true;
            break;
        }
    }
    if(flag==false) return NULL;
    ListNode* temp=head;
    while(temp!=slow){
        temp=temp->next;
        slow=slow->next;
    }
    return temp;
}
int main(){
}