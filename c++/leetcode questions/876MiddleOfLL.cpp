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
ListNode* middleNode(ListNode* head) {
    int size=0;
    ListNode* temp=head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int midIdx=size/2;
    ListNode* mid=head;
    for(int i=1;i<=midIdx;i++){
        mid=mid->next;
    }
    return mid;
}
int main(){
}