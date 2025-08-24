#include <iostream>
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
vector<ListNode*> splitListToParts(ListNode* head, int k) {
    ListNode* temp=head;
    int n=0;
    while(temp){
        temp=temp->next;
        n++;
    }
    vector<ListNode*> ans;
    int size=n/k;
    int rem=n%k;
    temp=head;
    while(temp!=NULL){
        ListNode* c=new ListNode(100);
        ListNode* tempC=c;
        int s=size;
        if(rem>0) s++;
        rem--;
        for(int i=1;i<=s;i++){
            tempC->next=temp;
            temp=temp->next;
            tempC=tempC->next;
        }
        tempC->next=NULL;
        ans.push_back(c->next);
    }
    if(ans.size()<k){
        int extra=k-ans.size();
        for(int i=1;i<=extra;i++){
            ans.push_back(NULL);
        }
    }
    return ans;
}
int main(){
   
}
