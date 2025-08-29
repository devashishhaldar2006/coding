#include <iostream>
#include <stack>
#include <vector>
#include <string>
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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry=0;
    ListNode* t=new ListNode(0);
    ListNode* temp=t;
    while(l1 || l2 || carry){
        int sum=carry;
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        sum=sum%10;
        temp->next=new ListNode(sum);
        temp=temp->next;
    }
    return t->next;
}
int main(){
    
}