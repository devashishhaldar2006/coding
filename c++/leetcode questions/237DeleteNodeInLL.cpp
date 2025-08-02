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
void deleteNode(ListNode* target) {
    target->val=target->next->val;
    target->next=target->next->next;
}
int main(){
}