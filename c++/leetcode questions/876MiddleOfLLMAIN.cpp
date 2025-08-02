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
};//this is for right middle
//for left middle use while condition fast->next->next!=NULL
ListNode* middleNode(ListNode* head) {
//slow and fast pointers
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){//agar mai kisi bhi node ke next pr ajan chahta hu tp mujhe phele uspe jana pdega isliye and ki condition same order me likhe gye hai
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
}