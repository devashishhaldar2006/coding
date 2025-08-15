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
ListNode* swapNodes(ListNode* head, int k) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* tempA=head;
    int n=0;
    while(tempA){
        n++;
        tempA=tempA->next;
    }
    int m=n-k+1;
    tempA=head;
    ListNode* tempB=head;
    for(int i=1;i<k;i++){
        tempA=tempA->next;
    }
    for(int i=1;i<m;i++){
        tempB=tempB->next;
    }
    swap(tempA->val,tempB->val);
    return head; 
}
int main(){
}