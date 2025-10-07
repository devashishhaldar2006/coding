class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL) return head;
        while(head!=NULL && head->val==val) {
            head=head->next;
        }
        if(head==NULL) return head;
        ListNode* temp=head;
        while (temp->next) {
            if(temp->next->val==val) {
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
        }
        return head;
    }
};
