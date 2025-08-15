#include <iostream>
#include <stack>
#include <vector>
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
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* temp=list1;
    for(int i=0;i<a-1;i++){
        temp=temp->next;
    }
    ListNode* tempA=list1;
    for(int i=0;i<=b;i++){
        tempA=tempA->next;
    }
    ListNode* tempB=list2;
    while(tempB->next!=NULL){  
        tempB=tempB->next;
    }
    temp->next=list2;
    tempB->next=tempA;
    return list1;
}
int main(){

}
