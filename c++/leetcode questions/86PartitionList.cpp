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
ListNode* partition(ListNode* head, int x) {
    ListNode* lo=new ListNode(100);
    ListNode* hi=new ListNode(200);
    ListNode* tempLo=lo;
    ListNode* tempHi=hi;
    ListNode* temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            tempLo->next=temp;
            temp=temp->next;
            tempLo=tempLo->next;
        }
        else{
            tempHi->next=temp;
            temp=temp->next;
            tempHi=tempHi->next;
        }
    }
    tempLo->next=hi->next;
    tempHi->next=NULL;
    return lo->next;
}
int main(){
}